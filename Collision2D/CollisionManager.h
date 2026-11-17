#pragma once
#include <vector>
#include <algorithm>
#include "GameObject.h"
class CollisionManager
{
	std::vector<GameObject> gameObjects;
public:
	void addGameObject(const GameObject& obj);
	void removeGameObject(int id);
	std::size_t getObjectCount() const;
	void checkCollisions() const;
};

