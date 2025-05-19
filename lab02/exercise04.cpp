#include <iostream>
using namespace std;
int main()
{
    int a, b;
    double c, d;

    a = 19.99 + 21.99;
    b = (int)19.99 + (int)21.99;
    c = 23 / 8;
    d = 23 / 8.0;

    cout << "a = " << a << endl;    // 41
    cout << "b = " << b << endl;    // 40
    cout << "c = " << c << endl;    // 2
    cout << "d = " << d << endl;    // 2.875
    cout << "0/0= " << 0 / 0 << endl;

    return 0;
}
/**
 * 1. a 和 b 不相等：
 * 计算a时，先计算19.99+21.99=41.98，在将该值转化成int类型赋值给a；
 * 计算b时，先类型转换，再计算；
 * 
 * 2. 两数相除，两数类型均为int，则结果为int类型；
 * 若其中一个为double，则结果为double类型；
 */