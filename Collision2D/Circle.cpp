#include "Circle.h"
bool isColliding(const Circle& a, const Circle& b) {
	float dx = a.x - b.x;
	float dy = a.y - b.y;
	float distanceSquared = dx * dx + dy * dy;
	float radiusSum = a.radius + b.radius;
	return distanceSquared <= radiusSum * radiusSum;
}