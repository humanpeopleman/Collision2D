#include "GameObject.h"

GameObject::GameObject(int id, const std::string& name, float x, float y, bool active)
	: id(id), name(name), x(x), y(y), active(active) {
}
void GameObject::setPosition(float newX, float newY) {
	x = newX;
	y = newY;
}
void GameObject::move(float deltaX, float deltaY) {
	x += deltaX;
	y += deltaY;
}

void GameObject::getPosition(float& outX, float& outY) const {
	outX = x;
	outY = y;
}

bool GameObject::isActive() const {
	return active;
}

void GameObject::setActive(bool state) {
	active = state;
}