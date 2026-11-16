#include <iostream>
#include "AABB.h"
using namespace std;
int main()
{
    Rect a = { 10, 0, 10, 10 };
    Rect b = { 0, 0, 10, 10 } ;
    Rect c = { 5, 5, 10, 10 };
    Rect d = { 20, 20, 10, 10 };
    Rect e = { 0, 0, 5, 5 };
    Rect f = { 0, 0, 20, 20 };
    cout << boolalpha;
    cout << isColliding(a, c) << endl;
    cout << isColliding(b, d) << endl;
    cout << isColliding(b, a) << endl;
    cout << isColliding(f, e) << endl;
    return 0;
}