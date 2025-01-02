#include <iostream>

using namespace std;

// function template
template <typename T>
int Compare(const T &a, const T &b)
{
    cout << "The input type is " << typeid(a).name() << endl;
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    else
        return 0;
}

// define a struct
struct stuinfo
{
    string name;
    int age;
};

// function specialization 函数特例化
template <>
int Compare(const stuinfo &a, const stuinfo &b)
{
    cout << "The input type is " << typeid(a).name() << endl;
    if (a.age > b.age)
        return 1;
    else if (a.age < b.age)
        return -1;
    else
        return 0;
}

// function instantiate函数显式实例化
// 也可以不进行显示实例化，直接调用，即隐式实例化
template int Compare<int>(const int &, const int &);
template int Compare<float>(const float &, const float &);
template int Compare<char>(const char &, const char &);

int main()
{
    int a = 1, b = 9;
    cout << "Compare of the two integers:" << Compare(a, b) << endl;

    float x = 3.2f, y = -1.3f;
    cout << "Compare of the two floats:" << Compare(x, y) << endl;

    char m = 'a', n = 'A';
    cout << "Compare of the two chars:" << Compare(m, n) << endl;

    struct stuinfo stu1 = {"zhang", 29};
    struct stuinfo stu2 = {"Li", 29};
    cout << "Compare of the two struct:" << Compare(stu1, stu2) << endl;

    return 0;
}