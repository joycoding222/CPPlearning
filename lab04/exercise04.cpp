#include <iostream>
#include "fib.h"

using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    fib(num);
    return 0;
}