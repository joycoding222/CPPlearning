// dynamic allocation and polymorphism
// 动态内存分配和多态性
#include <iostream>
using namespace std;
class Polygon
{
protected:
    int width, height;

public:
    Polygon(int a, int b) : width(a), height(b) {}
    virtual int area(void) = 0;
    void printarea()
    {
        cout << this->area() << '\n';
    }
};

class Rectangle : public Polygon
{
public:
    Rectangle(int a, int b) : Polygon(a, b) {}
    int area()
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
public:
    Triangle(int a, int b) : Polygon(a, b) {}
    int area()
    {
        return width * height / 2;
    }
};

int main()
{
    Polygon *ppoly1 = new Rectangle(4, 5);
    ppoly1->printarea();
    Polygon *ppoly2 = new Triangle(2, 5);
    ppoly2->printarea();
    delete ppoly1;
    delete ppoly2;
    return 0;
}
/*
存在的问题：
1.内存泄漏
2.动态内存分配应该放在构造函数里？
*/