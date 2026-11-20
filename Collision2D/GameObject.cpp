#include "GameObject.h"

GameObject::GameObject(int id, const std::string& name, CollisionShape shape, bool active)
	: id(id), name(name), shape(shape), active(active) {
}
void GameObject::setPosition(float newX, float newY) {
	std::visit([newX, newY](auto& shape) {
		shape.x = newX;
		shape.y = newY;
		}, shape);
}
void GameObject::move(float deltaX, float deltaY) {
	std::visit([deltaX, deltaY](auto& shape) {
		shape.x += deltaX;
		shape.y += deltaY;
		}, shape);
}

void GameObject::getPosition(float& outX, float& outY) const {
	std::visit([&outX, &outY](const auto& shape) {
		outX = shape.x;
		outY = shape.y;
		}, shape);
}

bool GameObject::isActive() const {
	return active;
}

void GameObject::setActive(bool state) {
	active = state;
}
CollisionShape GameObject::getShape() const {
	return shape;
}
int GameObject::getId() const {
	return id;
}