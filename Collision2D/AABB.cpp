#include "AABB.h"
#include <algorithm>
bool isColliding(const Rect& a, const Rect& b) {
	return !(
		a.x + a.width/2 <= b.x - b.width/2 || //a의 오른쪽 끝이 b의 왼쪽보다 왼쪽이거나 같음
		b.x + b.width/2 <= a.x - a.width/2|| //b의 오른쪽 끝이 a의 왼쪽보다 왼쪽이거나 같음
		a.y + a.height/2 <= b.y - b.height/2|| //a의 위쪽 끝이 b의 아래쪽보다 아래에 있거나 같음
		b.y + b.height/2 <= a.y - a.height/2); //b의 위쪽 끝이 a의 아래쪽보다 아래에 있거나 같음	
}
bool isColliding(const Rect& rect, const Circle& circle) {
	float rectLeft = rect.x - rect.width / 2;
	float rectRight = rect.x + rect.width / 2;
	float rectTop = rect.y + rect.height / 2;
	float rectBottom = rect.y - rect.height / 2;
	float a = std::clamp(circle.x, rectLeft, rectRight);
	float b = std::clamp(circle.y, rectBottom, rectTop);
	float dx = circle.x - a;
	float dy = circle.y - b;
	return (dx * dx + dy * dy) < (circle.radius * circle.radius);
}