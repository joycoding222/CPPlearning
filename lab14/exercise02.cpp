#include <iostream>

using namespace std;

class OutOfRangeException
{
    int mark;
    int index;

public:
    OutOfRangeException(int mark, int index) : mark(mark), index(index) {}
    int getmark()
    {
        return this->mark;
    }
    int getindex()
    {
        return this->index;
    }
};

float calculateAverage(int a, int b, int c, int d)
{
    if (a < 0 || a > 100)
    {
        throw OutOfRangeException(a, 1);
    }

    if (b < 0 || b > 100)
    {
        throw OutOfRangeException(b, 2);
    }

    if (c < 0 || c > 100)
    {
        throw OutOfRangeException(c, 3);
    }

    if (d < 0 || d > 100)
    {
        throw OutOfRangeException(d, 4);
    }

    return (a + b + c + d) / 4.0;
}
int main()
{
    int a, b, c, d;
    char flag;
    float aver = 0.0f;

    cout << "Please enter marks for 4 courses:";

    // 如果能够成功从输入流中读取四个整数并存储，则 cin 保持在 true；
    // 如果输入的不是整数，则 cin 进入 false 状态，循环终止；
    // 注意：一旦 cin 进入错误状态，需要 cin.clear() 来清除错误状态，并通过 cin.ignore() 来丢弃错误输入的字符
    while (cin >> a >> b >> c >> d)
    {
        try
        {
            aver = calculateAverage(a, b, c, d);
            cout << "The average of the four courses is " << aver << endl;
        }
        catch (OutOfRangeException &error)
        {
            cout << "The parameter " << error.getindex() << " is " << error.getmark() << " which out of range(0-100)" << endl;
        }

        cout << "Would you want to enter another marks for 4 courses(y/n)";
        cin >> flag;
        if (flag == 'y')
            cout << "Please enter marks for 4 courses:";
        if (flag == 'n')
            // 当 break 语句出现在一个循环内时，循环会立即终止，且程序流将继续执行紧接着循环的下一条语句
            break;
    }

    cout << "Bye, see you next time" << endl;

    return 0;
}