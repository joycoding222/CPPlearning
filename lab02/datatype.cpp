/**
 * datatype & output control
 */
#include <iostream>
#include <iomanip> // setprecision

using namespace std;

int main()
{
    // bool i = true;
    // int b = i;
    // cout << i << endl; // 1
    // cout << b << endl; // 1

    // // float f1 = 1.2f;
    // // float f2 = f1 * 1000000000000000; // 1.0e15
    // float f1 = 23400000000;
    // float f2 = f1 + 10;
    // cout << f1 << endl;
    // cout << f2 << endl;
    // cout << std::fixed << std::setprecision(15) << f1 << endl;
    // cout << std::fixed << std::setprecision(1) << f2 << endl;

    // int a = 3;
    // cout << a++ << " " << ++a << endl;
    // int c = 'c';
    // cout << c << endl;

    // // num_int1 is not same with num_int2
    // int num_int1 = 100000004;
    // float num_int_float = num_int1;
    // int num_int2 = (int)(num_int_float);
    // cout << num_int1 << " " << num_int_float << " " << num_int2 << endl;

    // cout.width(12);
    // cout.fill('+');
    // cout << 456.77 << endl;

    // cout.precision(2);
    // cout << 123.356 << endl;
    // cout.precision(5);
    // cout << 3897.678485 << endl;

    bool flag = false;
    double a = 2.3876;
    double b = 0.46e2;
    cout << boolalpha << flag << endl;   // false
    cout << fixed << a << endl;          // 2.387600
    cout << b << endl;                   // 46.000000
    cout << noboolalpha << flag << endl; // 0
    cout.unsetf(ios::fixed);
    cout << a << endl; // 2.3876
    cout << b << endl; // 46

    return 0;
}