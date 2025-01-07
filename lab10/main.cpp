#include <iostream>
#include "Complex.hpp"

using namespace std;

int main()
{
    Complex a(3, 4);
    Complex b(2, 6);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "~b = " << ~b << endl;
    cout << "a + b = " << a+b << endl;
    cout << "a - b = " << a-b << endl;
    cout << "a - 2 = " << a-2 << endl;
    cout << "a * b = " << a*b << endl;
    cout << "2 * a = " << 2*a << endl;
    cout << "==========================" << endl;

    Complex c = b;
    cout << "c = " << c << endl;
    cout << "b == c? " << boolalpha << (b==c) << endl;
    cout << "b != c? " << (b!=c) << endl;
    cout << "a == b? " << (a==b) << endl;
    cout << "==========================" << endl;

    Complex d;
    cout << "Enter a complex number(real part and imaginary part):";
    cin >> d;
    cout << "Before assignment, d = " << d << endl;
    d = c;
    cout << "After assignmet, d = " << d << endl;
    
    return 0;
}