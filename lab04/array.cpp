#include <iostream>

using namespace std;

typedef int vec[3];

int main()
{
    int array1[5];  // 未初始化的随机值
    int array2[5] = {0, 1, 2 ,3 , 4};

    for (int i = 0; i < 5; ++i)
    {
        cout << array1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << array2[i] << " ";
    }
    cout << endl;

    // variable-length array
    int len = 10;
    while (len > 0)
    {
        int array3[len];
        len--;
        cout << sizeof(array3) << endl;
    }

    // typedef
    vec num = {0, 2, 3};
    for(int i = 0; i < 3; ++i)
    {
        cout << num[i] << " ";
    }

    return 0;
}