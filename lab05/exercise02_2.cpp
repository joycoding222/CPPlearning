#include <iostream>
using namespace std;

int main()
{
    const char *pc = "Welcome to programming.", *r;
    long *q = (long *)pc;
    q++;
    r = (char *)q;
    cout << r << endl;
    cout << sizeof(long) << endl;
    return 0;
}