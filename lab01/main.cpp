#include <iostream>
#include "Add.h"

using namespace std;

int main()
{
    long num1 = 2147483647;
    long num2 = 1;
    long result = 0;

    result = add(num1, num2);
    cout << "The result is " << result << endl;

    return 0;
}

/*
Compile:
    1. g++ -c main.cpp
    2. g++ -c Add.cpp

Link:
    1. g++ main.o Add.o -o add

Compile & Link: 
    g++ main.cpp Add.cpp -o add

*/