class Base
{
private:
    int x;

protected:
    int y;

public:
    int z;
    void funBase(Base &b)
    {
        ++x;
        ++y;
        ++z;
        ++b.x;
        ++b.y;
        ++b.z;
    }
};

class Derived : public Base
{
public:
    /*
    在派生类的成员函数内部，
    可以访问派生类对象自身以及任何其他派生类对象的受保护基类成员，
    但不能直接访问通过引用或指针传递给它的独立基类对象的受保护成员。
    */
    void funDerived(Base &b, Derived &d)
    {
        ++x; // x 是 Base 类的私有成员变量，不能访问
        ++y;
        ++z;
        ++b.x; // x 是 Base 类的私有成员变量，不能访问
        ++b.y; // b 是一个独立的 Base 类的对象，不是 Derived 类的一部分，因此不能访问 b 的受保护成员 y
        ++b.z;
        ++d.x; // x 是 Base 类的私有成员变量，不能访问
        ++d.y;
        ++d.z;
    }
};

void fun(Base &b, Derived &d)
{
    ++x; // 在类的外部未定义 x y z
    ++y; // 在类的外部未定义 x y z
    ++z; // 在类的外部未定义 x y z
    ++b.x; // 类的外部不能访问 私有成员 x 和受保护成员 y
    ++b.y; // 类的外部不能访问 私有成员 x 和受保护成员 y
    ++b.z;
    ++d.x; // 类的外部不能访问 私有成员 x 和受保护成员 y
    ++d.y; // 类的外部不能访问 私有成员 x 和受保护成员 y
    ++d.z;
}
/*
受保护的成员变量可以被：基类的成员函数、基类的友元函数、派生类的成员函数访问；
私有的成员变量可以被：基类的成员函数、基类的友元函数访问；
公开的成员变量可以被：到处访问；
*/