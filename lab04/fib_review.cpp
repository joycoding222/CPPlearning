/**
 * 复习C++基础时重写
 * 2025/05/19
 */
#include <iostream>

using namespace std;

void fib(int n)
{
    int fib[n]{1, 1};

    if (n == 1)
    {
        fib[0] = 1;
    }
    else if (n == 2)
    {
        fib[0] = 1;
        fib[1] = 1;
    }
    else if (n >= 3)
    {
        for (int i = 2; i < n; ++i)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
    }
    else
    {
        return;
    }

    // output
    for (int i = 0; i < n; ++i)
    {
        cout << fib[i] << " ";
        if (i % 10 == 9)
        {
            cout << endl;
        }
    }
    cout << endl;
}

int main()
{
    cout << "Enter: " << endl;
    int n;
    cin >> n;
    fib(n);

    return 0;
}