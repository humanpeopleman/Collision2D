#include "AABB.h"

bool isColliding(const Rect& a, const Rect& b) {
	return !(
		a.x + a.width/2 <= b.x - b.width/2 || //a의 오른쪽 끝이 b의 왼쪽보다 왼쪽이거나 같음
		b.x + b.width/2 <= a.x - a.width/2|| //b의 오른쪽 끝이 a의 왼쪽보다 왼쪽이거나 같음
		a.y + a.height/2 <= b.y - b.height/2|| //a의 위쪽 끝이 b의 아래쪽보다 아래에 있거나 같음
		b.y + b.height/2 <= a.y - a.height/2); //b의 위쪽 끝이 a의 아래쪽보다 아래에 있거나 같음
}