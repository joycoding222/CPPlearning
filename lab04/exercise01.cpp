 #include <iostream>
 #include <string.h>
 using namespace std;


 int main()
 {
    int cards[4]{}; //初始化（正确的，相当于 int cards[4] = {0, 0, 0, 0};)
    int hands[4];
    int price[] = {2.8,3.7,5,9};    //error:narrowing conversion窄化转换，double 大小8字节，int 大小4字节
    char direction[4] {'L',82,'U',68};  //字符数组结尾没有空字符
    char title[] = "ChartGPTis an awesome tool.";   //这种初始化方式末尾自动补空字符
    cout<< "sizeof(cards) = " << sizeof(cards) << ",sizeofof cards[0] = " << sizeof(cards[0]) << endl;
    cout<< "sizeof(price) = " << sizeof(price) << ",sizeofof price[0] = " << sizeof(price[1]) << endl;
    cout<< "sizeof(direction) = " << sizeof(direction) << ",length of direction = " << strlen(direction) << endl;
    cout<< "sizeof(title) = " << sizeof(title) << ",length of title = " << strlen(title) << endl;
    return 0;
 }
 /*
 输出：
 sizeof(cards) = 16,sizeofof cards[0] = 4
 sizeof(price) = 32,sizeofof price[0] = 8
 sizeof(direction) = 4,length of direction = 31 
 原因：strlen()计算以空字符\0结尾的字符串的长度，在这里逻辑上strlen(direction)=4,但实际上输出31，说明程序发生了未定义行为，
 一直向后计数，直到空字符。这种做法是不正确的，不要对没有以空字符结尾的字符数组使用strlen。
 sizeof(title) = 28,length of title = 27
*/