#pragma once

struct Rect;
struct Circle
{
	float x;
	float y;
	float radius;
};
bool isColliding(const Circle& a, const Circle& b);

bool isColliding(const Circle& circle, const Rect& rect);