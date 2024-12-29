#include <iostream>

using namespace std;

// functions declare 函数声明
int *create_array(int size);
float *create_arrayf(int size);
int vabs(int * p, int n);
float vabs(float * p, int n);
double vabs(double * p, int n);

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

// functions define
int vabs(int * p, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum;
}
float vabs(float * p, int n){
    float sum = 0.f;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum;
}
double vabs(double * p, int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum;
}
int *create_array(int size)
{
    int * arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = i * 1;
    for (int i = 0; i < size; i++)
        cout << arr[i] << ";" ;
    cout << endl;
    return arr;
}
float *create_arrayf(int size)
{
    float * arr = new float[size];
    for (int i = 0; i < size; i++)
        arr[i] = i * 1 + 0.01f;
    for (int i = 0; i < size; i++)
        cout << arr[i] << ";" ;
    cout << endl;
    return arr;
}