#include<stdio.h>
 union data
 {
    int a;
    char c;
 };
 int main()
 {
    union data endian;
    endian.a= 0x11223344;
    if(endian.c== 0x11)
    printf("Big-Endian\n");
    else if(endian.c== 0x44)
    printf("Little-Endian\n");
    return 0;
 }