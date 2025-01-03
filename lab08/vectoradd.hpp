#pragma once
#include <iostream>

float *vectoradd(const float *p1, const float *p2, size_t n);
float *vectoradd_avx2(const float *p1, const float *p2, size_t n);
float *vectoradd_avx2_omp(const float *p1, const float *p2, size_t n);