#include <iostream>
using namespace std;

class ConstMember
{
private:
    const int m_a ;

public:
    ConstMember(int a) : m_a(a) {} // constructor
    void display() const // const member function
    {
        cout << "The value of the const member variable m_a is: " << m_a << endl;
    }
};

int main()
{
    ConstMember o1{666};
    ConstMember o2{42};
    o1.display();
    o2.display();
    // o1 = o2;
    return 0;
}
