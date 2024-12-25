#include <stdio.h>
int main()
{
    int a[] = {2, 4, 6, 8, 10}, y = 1, *p;
    p = &a[1];
    printf("a = %p\np = %p\n", a, p);
    for (int i = 0; i < 3; i++)
        y += *(p + i);
    printf("y = %d\n\n", y);
    int b[5] = {1, 2, 3, 4, 5};
    // z
    /* 注意对于数组b[5]，b和&b有所区别，b是数组第一个元素的地址，&b是整个数组的地址，
    但对于b，一个元素指的是数组的一个元素，
    对于&b，一个元素指的是整个数组*/
    int *ptr2 = (int *)b + 1;
    printf("%d\n", *ptr2);
    
    int *ptr = (int *)(&b + 1); //int (*)[5]是一个指向包含5个整数的数组的指针类型，加1后偏移了1个元素20字节
    printf("b = %p\nb+4 = %p\nptr = %p\n", b, b + 4, ptr);  //b+4偏移4个元素16字节
    printf("%p,%p\n", b,&b);
    printf("%d,%d\n", *(b + 1), *(ptr - 1));
    return 0;
}