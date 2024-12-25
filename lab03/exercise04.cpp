 #include <iostream>
 using namespace std;
 int main()
{
    int n = 5;
    int sum = 0;
    for( ; n>0; n--){    //while(n >0)死循环
    sum += n;
    cout << "n = " << n << "  ";
    cout << "sum = " << sum << "  ";
    }
    return 0;
}