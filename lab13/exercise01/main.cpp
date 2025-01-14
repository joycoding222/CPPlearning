#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    Point a(8, 9), b(1, 2);
    Point c = a;
    cout << "point a: x = " << a.getX() << ", y = " << a.getY() << endl;
    cout << "point b: x = " << b.getX() << ", y = " << b.getY() << endl;
    cout << "point c: x = " << c.getX() << ", y = " << c.getY() << endl;
    cout << "------------------------------------------" << endl;
    Line line1(a, b);
    cout << "line1's distance:" << line1.getDistance() << endl;
    Line line2(line1);
    cout << "line2's distance:" << line2.getDistance() << endl;
    return 0;
}
