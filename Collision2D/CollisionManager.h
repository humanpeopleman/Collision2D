#pragma once
#include <vector>
#include <algorithm>
#include "GameObject.h"
class CollisionManager
{
	std::vector<GameObject*> gameObjects;
public:
	bool addGameObject(GameObject& obj);
	void removeGameObject(int id);
	std::size_t getObjectCount() const;
	std::size_t checkCollisions() const;
};

