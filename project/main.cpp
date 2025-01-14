#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 0, b = 0;
    int product = 1;

    if (argc == 1)
    {
        cout << "Please input 2 integers:" << endl;
        cin >> a >> b;
        if (cin.fail())
        {
            cout << "Invalid input" << endl;
            return 1;
        }
    }
    else if (argc == 3)
    {
        a = atoi(argv[1]); // atoi 将ASCII转化为int
        b = atoi(argv[2]);
    }
    else
    {
        cerr << "Invalid argument" << endl;
        return 1;
    }

    product = a * b;

    cout << a << " * " << b << " = " << product << endl;

    return 0;
}
// 输入特别大的数字时怎么做