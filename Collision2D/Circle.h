#pragma once
struct Circle
{
	float x;
	float y;
	float radius;
};
bool isColliding(const Circle& a, const Circle& b);
