#include "CollisionManager.h"
#include <iostream>
void CollisionManager::addGameObject(const GameObject& obj) {
	gameObjects.push_back(obj);
}
void CollisionManager::removeGameObject(int id) {
	gameObjects.erase(std::remove_if(gameObjects.begin(), gameObjects.end(),
		[id](const GameObject& obj) { return obj.getId() == id; }), gameObjects.end());
}
std::size_t CollisionManager::getObjectCount() const {
	return gameObjects.size();
}
void CollisionManager::checkCollisions() const {
	for (std::size_t i = 0; i < gameObjects.size(); ++i) {
		for (std::size_t j = i + 1; j < gameObjects.size(); ++j) {
			if (isColliding(gameObjects[i].getBound(), gameObjects[j].getBound())) {
				std::cout << "Collision detected between GameObject " << gameObjects[i].getId()
					<< " and GameObject " << gameObjects[j].getId() << std::endl;
			}
		}
	}
}