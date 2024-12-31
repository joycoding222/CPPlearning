#ifndef _VABS_
#define _VABS_

#include <cstddef> // if without this "include", size_t will be regarded as undefined character

// functions declare 函数声明
int *create_array(int size);
float *create_arrayf(int size);
int vabs(int * p, size_t n);
float vabs(float * p, int n);
double vabs(double * p, int n);

#endif