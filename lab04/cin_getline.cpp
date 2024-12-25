#include <iostream>
using namespace std;

int main(){
    char str[20];

    cout << "Enter:" << endl;
    cin.getline(str, 20);
    cout << "your enter:" << str << endl;

    cout << "Enter:" << endl;
    cin.getline(str, 20);
    cout << "your enter:" << str << endl;

    return 0;
}