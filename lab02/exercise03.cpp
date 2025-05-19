#include <iostream>
using namespace std;
int main()
{
    cout << fixed;
    cout.precision(12); // 补充设置小数点后12位精度
    float f1 = 1.0f;
    cout << "f1 = " << f1 << endl;

    float a = 0.1f;
    float f2 = a + a + a + a + a + a + a + a + a + a;
    cout << "f2 = " << f2 << endl;

    if (f1 == f2)
        cout << "f1 = f2" << endl;
    else
        cout << "f1 != f2" << endl;

    return 0;
}
/**
 * 将浮点数精度设置位小数点后12位，f1和f2的打印值不同
 */