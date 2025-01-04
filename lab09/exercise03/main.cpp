#include <iostream>
#include "Complex.hpp"

using namespace std;

int main()
{
    Complex num1;
    Complex num2 = {2, -3};
    Complex sum = {0, 0};

    sum.add(num1, num2);
    sum.subtract(num1, num2);
    sum.display(sum);

    return 0;
}