#include <iostream>
#include "vabs.h"
using namespace std;


// function template 函数模板
// template <typename T>
// T * create_array(T size){
//     T * array = new T[size];
//     for (int i = 0; i < size; i++)
//     {
//         array[i] = i;
//     }
//     return array;
// }


int main (){
    int len = 11;
    int * array = create_array(len);
    float * arrayf = create_arrayf(float(len));
    
    cout << vabs(array, len) << endl;
    cout << vabs(arrayf, len) << endl;

    delete []array;
    delete []arrayf;
    return 0;
}
