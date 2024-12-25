#include <iostream>
using namespace std;

int main()
{
    char *pc = "welcome to programming";
    cout << pc + 1 << endl;
    cout << sizeof(unsigned int) << endl;   // 4bytes, 32bits
    cout << sizeof(int) << endl;            // 4bytes, 32bits
    cout << sizeof(long) << endl;           // 4bytes, 32bits（笔记本上）8 bytes, 64bits（工位台式机）
    cout << sizeof(unsigned short) << endl; // 2bytes,16bits
    cout << sizeof(short) << endl;          // 2bytes,16bits
    cout << sizeof(char) << endl;
    cout << sizeof(double) << endl;
    return 0;
}