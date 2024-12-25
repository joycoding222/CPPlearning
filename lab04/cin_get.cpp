#include <iostream>
using namespace std;

int main(){
    char str[20];

    cout << "Enter:" << endl;
    cin.get(str, 20);
    cout << "your enter:" << str << endl;

    cin.get();  //加上这一行才能继续读入，否则只会打印"Enter" & "your enter"
    // 可以用cin_getline 则不会有该问题
    cout << "Enter:" << endl;
    cin.get(str, 20);
    cout << "your enter:" << str << endl;

    return 0;
}
/*Difference between cin_get() and cin_getline():
 getline() and get()both read an entire input line—that is, up until a newline character. 
 However, getline() discard the newline character, whereas get() leave it in the input queue*/