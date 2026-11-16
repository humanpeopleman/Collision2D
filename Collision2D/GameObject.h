#pragma once
#include <string>
class GameObject
{
	int id;
	std::string name;
	float x, y;
	bool active;

public:
	GameObject(int id, const std::string& name, float x, float y, bool active = true);
	
	void setPosition(float newX, float newY);
	void move(float deltaX, float deltaY);

	void getPosition(float& outX, float& outY) const;
	
	bool isActive() const;
	void setActive(bool state);
};

