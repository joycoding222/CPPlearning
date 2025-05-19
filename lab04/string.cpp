#include <iostream>

using namespace std;

int main()
{
    char str[50];

    cout << "Enter: " << endl;
    // 循环读入
    // while (cin >> str)
    // {
    //     cout << "Your enter: " << str << endl;
    // }

    // cin >> str;                            // hello world
    // cout << "Your enter: " << str << endl; // hello

    cin.get(str, 20);
    cout << "Your enter: " << str << endl;
    
    cin.get();
    cin.get(str, 20);
    cout << "Your enter: " << str << endl;

    return 0;
}