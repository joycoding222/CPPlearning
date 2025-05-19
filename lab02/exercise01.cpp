#include <stdio.h>
int main()
{
    signed char a = 127;    
    unsigned char b = 0xff;
    unsigned char c = 0;

    a++;
    b++;
    c--;
    printf("a=%d\nb=%d\nc=%d\n", a, b, c);
    return 0;
}
/**
 * a = 0111 1111, 输出-128
 * b = 1111 1111, 输出0
 * c = 0000 0000, 输出255，原因：向前借位， 1 0000 0000 - 1 = 0 1111 1111
 * 
 * signed char 类型的范围是：-128 ~ 127
 * unsigned char 类型的范围是：0 ~ 255
 */