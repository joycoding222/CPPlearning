#include <iostream>

using namespace std;

// functions define
int vabs(int * p, size_t n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(p[i]);
    }
    return sum;
}
float vabs(float * p, int n){
    float sum = 0.f;
    for (int i = 0; i < n; i++)
    {
        sum += abs(p[i]);
    }
    return sum;
}
double vabs(double * p, int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(p[i]);
    }
    return sum;
}
int *create_array(int size)
{
    int * arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = -i * 1;
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