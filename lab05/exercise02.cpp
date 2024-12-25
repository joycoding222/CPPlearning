#include <iostream>
using namespace std;
int main()
{
    int b[][4] = {1, 2, 3, 4};
    int *ptr = b[1];
    int a[][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // 定义二维数组
    int *p = *(a + 1);                                // a指向二维数组首元素地址，类型为int(*)[4],(a+1)指向数组第二行，类型为int(*)[4]
    // *（a+1)解引用，获取数组第二行的首地址
    p += 3;
    cout << "*p++ = " << *p++ << ",*p = " << *p << endl; //*p解引用，再自加

    const char *pc = "Welcome to programming.", *r;
    // pc++;
    cout << *pc << endl;  // 偏移1字节,输出e
    long *q = (long *)pc; // long 占4个字节，q+1后指针偏移4字节
    q++;
    // cout << q << endl;
    r = (char *)q;
    cout << r << endl;

    unsigned int m = 0x3E56AF67;               // unsigned int 4bytes 32bits
    unsigned short *pm = (unsigned short *)&m; // 强制类型转换,unsigned short 2bytes 16bits
    printf("%X\n", *pm);                       // 大写打印
    cout << "*pm = " << hex << *pm << endl;    // 转换后pm指向低地址的2个字节，由于小端模式，即保留了低字节
    pm++;
    cout << "*pm = " << hex << *pm << endl; // pm加1，指针偏移2字节
    return 0;
}