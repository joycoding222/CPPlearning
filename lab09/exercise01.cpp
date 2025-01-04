#include <iostream>
using namespace std;
class Demo
{
public:
    static int num;
    void display()
    {
        cout << "The value of the static member variable num is: " << num << endl;
    }
};

int Demo::num = 0; // 静态成员变量只能在类的外部进行定义和初始化；在类的内部只需进行声明，源程序缺少了num 的定义和初始化

int main()
{
    Demo obj;
    obj.display();
    return 0;
}
/*
display() can only invoke by an object of Demo, because display() is not a static member function
*/