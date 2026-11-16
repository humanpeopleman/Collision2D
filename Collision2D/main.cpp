#include <iostream>
#include "AABB.h"
#include "Circle.h"
#include "GameObject.h"
using namespace std;
int main()
{
    GameObject a(1, "A", 0, 0, 10, 10);
	GameObject b(2, "B", 5, 0, 10, 10);
    cout << boolalpha;
	cout << isColliding(a.getBound(), b.getBound()) << endl;
    a.setPosition(100, 100);
	cout << isColliding(a.getBound(), b.getBound()) << endl;

    return 0;
}