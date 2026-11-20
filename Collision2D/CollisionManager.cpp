#include "CollisionManager.h"
#include <iostream>
#include <type_traits>
#include <algorithm>
#include <variant>
bool CollisionManager::addGameObject(GameObject& obj) {
	if (std::any_of(gameObjects.begin(), gameObjects.end(),
		[&obj](const GameObject* existingObj) { return existingObj->getId() == obj.getId(); }))
		return false;
	gameObjects.push_back(&obj);
	return true;
}
void CollisionManager::removeGameObject(int id) {
	gameObjects.erase(std::remove_if(gameObjects.begin(), gameObjects.end(),
		[id](const GameObject* obj) { return obj->getId() == id; }), gameObjects.end());
}
std::size_t CollisionManager::getObjectCount() const {
	return gameObjects.size();
}
std::size_t CollisionManager::checkCollisions() const {
	std::size_t checkCount = 0;
	for (std::size_t i = 0; i < gameObjects.size(); ++i) {
		if (!gameObjects[i]->isActive()) continue;
		for (std::size_t j = i + 1; j < gameObjects.size(); ++j) {
			if (!gameObjects[j]->isActive()) continue;
			checkCount++;
			std::visit([&](const auto& a, const auto& b) {
				if (isColliding(a, b)) {
					std::cout << "Collision detected between GameObject " << gameObjects[i]->getId()
						<< " and GameObject " << gameObjects[j]->getId() << std::endl;
				}
				}, gameObjects[i]->getShape(), gameObjects[j]->getShape());
		}
	}
	return checkCount;
}