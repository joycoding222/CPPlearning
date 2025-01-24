#include <iostream>
#include <typeinfo>
using namespace std;

class Base
{
protected:
    int bvalue;

public:
    Base(int i) : bvalue(i) {}

    virtual bool equal(const Base &b) const;

    friend bool operator==(const Base &, const Base &);
};

class Derived : public Base
{
private:
    int dvalue;

public:
    Derived(int a, int b) : Base(a), dvalue(b) {}

    virtual bool equal(const Base &b) const override;
};

bool operator==(const Base &a, const Base &b)
{
    if (typeid(a).name() == typeid(b).name())
        a.equal(b); // equal()是一个虚函数，根据传入对象的实际类型调用相应的成员函数
    else
        throw "The two objects have different types, they can not be compare.";
        return false;
};

bool Base::equal(const Base &b) const
{
    if (this->bvalue == b.bvalue)
    {
        cout << "Two Base type objects are equal." << endl;
        return true;
    }
    else{
        cout << "The Base type objects are not equal because they have different values."
            << endl;
        return false;}

}
bool Derived::equal(const Base &b) const
{
    // why this work??what's dynamic_cast
    const Derived * temp = dynamic_cast<const Derived *>(&b);
    if ((this->bvalue == temp->bvalue) && (this->dvalue == temp->dvalue))
    {
        cout << "Two Derived type objects are equal." << endl;
        return true;
    }
    else
    {
        cout << "Two Derived type objects are not equal because they have different values." << endl;
        return false;
    }

}
// check if the two objects are equal and handles the exception
void process(const Base &a, const Base &b)
{
    try{
        a == b;
    }
    catch(const char* msg){// 原来这里写的是 const string 一直没有后两个process
        cout << "The two objects have different types, they can not be compared." << endl;
    }
    
}

int main(int argc, char* argv[])
{
    Base b1(2);
    Base b2(2);

    Derived d1(1, 2);
    Derived d2(2, 2);

    process(b1, b2);
    process(d1, d2);
    process(b1, d1);

    return 0;
}