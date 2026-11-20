#pragma once
#include <string>
#include <variant>
#include "AABB.h"
#include "Circle.h"

using CollisionShape = std::variant<Rect, Circle>;
class GameObject
{
	int id;
	std::string name;
	CollisionShape shape;
	bool active;

public:
	GameObject(int id, const std::string& name, CollisionShape shape, bool active = true);
	
	void setPosition(float newX, float newY);
	void move(float deltaX, float deltaY);

	void getPosition(float& outX, float& outY) const;
	
	bool isActive() const;
	void setActive(bool state);
	
	CollisionShape getShape() const;

	int getId() const;
};

