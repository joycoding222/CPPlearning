#include <stdio.h>
using namespace std;

int main()
{
    long long int a = 56789 * 23456789ll;
    printf("%d\n", __INT32_MAX__);
    printf("a=%lld\n", a);
    printf("%ld\n", sizeof(long long int));
    return 0;
}
/**
 * C 输出大数字：
 * long long int 按理来说是64位，足够表示；
 * 在计算大数字时，为避免数字超过int类型表示的范围，可以在数字后加上ll，指定类型为long long int;
 */