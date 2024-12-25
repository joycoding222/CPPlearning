 #include <iostream>
 using namespace std;
 int main()
 {
    for(size_t n = 2; n >= 0; n--)  //size_t 是无符号整数类型，递减到0后再尝试递减它会变成一个很大的正数2^64-1,可以将size_t改成int
    cout << "n = " << n << "  ";
    return 0;
 }