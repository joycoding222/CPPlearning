#include <iostream>
#include "matrix.hpp"

using namespace std;

int main()
{
    Matrix matA(3, 4);
    matA.data[6] = 3;
    Matrix matB(3, 4);
    matB.data[11] = 4;
    cout << "a is :" << endl << matA << endl;
    cout << "b is :" << endl << matB << endl;

    Matrix matC = matA + matB; 
    // 第一次这里报错，因为copy constructor 有问题，犯了课程中的经典错误，两个指针指向同一块内存，用hard copy 解决
    cout << "c is :" << endl << matC << endl;
    Matrix matD = matA;
    // 这里开始打印的值和matA 一样，因为在重载+时，改变了this 对象的值
    cout << "Before assignment, d is :" << endl << matD << endl;
    matD = matB;
    cout << "After  assignment, d is :" << endl << matD << endl;

    return 0;
}