#include <iostream>
using namespace std;
int *create_array(int size)
{
    int * arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = i * 1;
    return arr;
}

int main()
{
    int len = 16;
    int *ptr = create_array(len);
    for (int i = 0; i < len; i++)
        cout << ptr[i] << ",";
    delete []ptr; // avoid memory leak
    return 0;
}

// 另一种:在主函数中定义数组变量，在子函数中对值进行操作
// void create_array2(int size, int * arr)
// {
//     for (int i = 0; i < size; i++)
//         arr[i] = i * 10;
//     return;
// }
// int main()
// {
//     int len = 16;
//     int ayy[len];
//     create_array2(len, ayy);
//     for (int i = 0; i < len; i++)
//         cout << ayy[i] << ",";
//     return 0;
// }

