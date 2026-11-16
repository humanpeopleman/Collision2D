#include <iostream>
#include "AABB.h"
#include "Circle.h"

using namespace std;
int main()
{
    Circle a = { 0, 0, 5 };
    Circle b = { 7, 0, 5 };
    Circle c = { 0, 7, 5 };
    Circle d = { 0, 0, 10 };
    cout << boolalpha;
    cout << isColliding(a, b) << endl;
    cout << isColliding(a, c) << endl;
    cout << isColliding(a, d) << endl;
    cout << isColliding(b, c) << endl;
    cout << isColliding(b, d) << endl;
    cout << isColliding(c, d) << endl;

    return 0;
}