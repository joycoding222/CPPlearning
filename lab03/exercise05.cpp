 #include <iostream>
 using namespace std;
 int main()
 {
    int n=1,fa=1;   //示例中定义了n和fa但是没有初始化
    do{
    fa *= n;
    n++;
    }while(n <= 10);
    cout << "fa = " << fa << endl;
    return 0;
}