#include <iostream>
using namespace std;
class Polygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area()
    {
        return 0;
    }
};

class Rectangle : public Polygon
{
public:
    int area()
    {
        return width * height;
    }
};
class Triangle : public Polygon
{
public:
    int area()
    {
        return width * height / 2;
    }
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    ppoly1->set_values(4, 5);
    ppoly2->set_values(2, 5);
    cout << rect.area() << endl;
    cout << trgl.area() << endl;
    cout << ppoly1->area() << endl;
    cout << ppoly2->area() << endl;
    return 0;
}
/*
ppoly1 是一个 Polygon 类型的指针，所以通过ppoly1 调用函数 area() 时，调用的是基类的函数；
rect 是一个 Rectangle 类型的对象，通过该对象调用成员函数 area() ,则调用的是派生类 Rectangle 的成员函数；
为解决该问题，在基类成员函数 area() 的定义前，加上 virtual 即可，调用的函数类型将取决于指针实际指向的对象的类型，
    而非指针本身的类型
*/
