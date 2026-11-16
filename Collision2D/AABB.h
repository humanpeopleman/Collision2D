#pragma once
//사각형 구조체
struct Rect { 
	float x; //중심점의 x좌표
	float y; //중심점의 y좌표
	float width; //너비
	float height; //높이
};

bool isColliding(const Rect& a, const Rect& b); //충돌 확인 함수