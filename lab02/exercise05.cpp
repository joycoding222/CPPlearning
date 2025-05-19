#include <iostream>
int main()
{
    auto a = 10; // 10
    std::cout << a << std::endl;

    a = 20.5; // 20
    std::cout << a << std::endl;

    a += 10.5; // 30.5
    std::cout << a << std::endl;

    int b = 20 + 10.5;
    std::cout << b << std::endl;
    return 0;
}
/*
    计算过程中发生了什么：
    1. 首先a被推断为int类型；
    2. 20.5被转换为int类型后，赋值给a；
    3. 首先计算20 + 10.5 = 30.5，并且结果为double类型，再隐式类型转换为int类型后，赋值给a；
*/