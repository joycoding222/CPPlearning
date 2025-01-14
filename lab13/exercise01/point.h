#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    double x, y;

public:
    Point(double newX, double newY);
    Point(const Point &p);
    double getX() const;
    double getY() const;
    friend std::ostream &operator<<(std::ostream &os, const Point &p)
    {
        cout << "p.x = " << p.x << ", " << "p.y = " << p.y;
        return os;
    }
};

class Line
{
private:
    Point p1, p2;
    double distance;

public:
    Line(const Point &xp1, const Point &xp2);
    Line(const Line &q);
    double getDistance() const;
};

Point::Point(double newX, double newY) : x(newX), y(newY)
{
    cout << "Constructor:Point(double newX, double newY)" << endl;
}
Point::Point(const Point &p) : x(p.x), y(p.y)
{
    cout << "Copy constructor:Point(const Point &p)\n" << p << endl;
}
double Point::getX() const
{
    return this->x;
}
double Point::getY() const
{
    return this->y;
}

Line::Line(const Point &xp1, const Point &xp2) : p1(xp1), p2(xp2)
{
    cout << "Constructor:Line(Point xp1, Point xp2)" << endl;
}
Line::Line(const Line &q) : p1(q.p1), p2(q.p2)
{
    cout << "Copy constructor:Line::Line(const Line &q)" << endl;
}
double Line::getDistance() const
{
    // pow 求平方
    double distance = sqrt(pow(p1.getX() - p2.getX(), 2) + pow((p1.getY() - p2.getY()), 2));
    return distance;
}