#include <iostream>
#include "fib.h"

using namespace std;

int fib(int n){
    int fib_num[20];
    if (n==1)
        fib_num[0] = 1;
    else if (n==2){
        fib_num[0] = 1;
        fib_num[1] = 1;
    }
    else{
        fib_num[0] = 1;
        fib_num[1] = 1;
        for(int i=2; i<=n-1; i++)
            fib_num[i] = fib_num[i-1] + fib_num[i-2];
    }
    for(int i=0; i<=n-1; i++){
        cout << fib_num[i] << " ";
        if (i % 10 == 9)    //输出10个数后换行
            cout << endl;
        if (i % n == (n-1)) //全部输出后换行
            cout << endl;
    }
    return 0;
}