 #include <stdio.h>

 union data{
    int n;
    char ch;
    short m;
 };
 int main()
 {
    union data a;
    printf("%ld, %ld\n", sizeof(a), sizeof(union data) ); //union公用内存，内存大小为最大的数据，所以两个输出都是4字节

    a.n= 0x40;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);    //%X全部使用大写字母来打印十六进制数
    a.ch = '9';
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.m= 0x2059;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);    //0x59低字节，放在低地址中（通过a.ch），因此为little endian
    a.n= 0x3E25AD54;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    return 0;
 }
 /*
 输出：4, 4
40, @, 40
39, 9, 39
2059, Y, 2059
3E25AD54, T, AD54
判断为小端模式little endian:低位字节放在低地址处*/