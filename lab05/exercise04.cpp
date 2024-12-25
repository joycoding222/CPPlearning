#include <iostream>
#include "stuinfo.hpp"
using namespace std;

int main()
{
    int n = 3;
    struct stuinfo stu[n];
    inputstu(stu, n);
    showstu(stu, n); // stu[n]是结构体数组的单个元素,这里只需要将数组名作为参数传递给函数
    return 0;
}