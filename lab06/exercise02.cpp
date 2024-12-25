#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter 2 numbers:" << endl;
    cin >> a;
    cin >> b;
    cout << "Before Swap,a = " << a << " and " << "b = " << b << endl;
    swap(a, b);
    cout << "After Swap,a = " << a << " and " << "b = " << b << endl;

    return 0;
}