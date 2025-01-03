#include <iostream>
#include "vectoradd.hpp"

#ifdef WITH_AVX2
#include <immintrin.h>
#endif

#ifdef WITH_NEON
#include <arm_neon.h>
#endif

#ifdef _OPENMP
#include <omp.h>
#endif

using namespace std;

float *vectoradd(const float *p1, const float *p2, size_t n)
{
    float *p = new float[n];

    for (int i = 0; i < n; i++)
    {
        p[i] = p1[i] + p2[i];
    }
    return p;
}

float *vectoradd_avx2(const float *p1, const float *p2, size_t n)
{
#ifdef WITH_AVX2
    if (n % 8 != 0)
    {
        std::cerr << "The size n must be a multiple of 8." << std::endl;
        return nullptr;
    }

    float *p = new float[n];
    __m256 a, b;
    __m256 c = _mm256_setzero_ps();

    for (size_t i = 0; i < n; i += 8)
    {
        a = _mm256_loadu_ps(p1 + i);
        b = _mm256_loadu_ps(p2 + i);
        c = _mm256_add_ps(c, _mm256_add_ps(a, b));
    }
    _mm256_storeu_ps(p, c);
    return p;
#else
    std::cerr << "AVX2 is not supported" << std::endl;
    return nullptr;
#endif
}

float *vectoradd_avx2_omp(const float *p1, const float *p2, size_t n)
{
#ifdef WITH_AVX2
    if (n % 8 != 0)
    {
        std::cerr << "The size n must be a multiple of 8." << std::endl;
        return nullptr;
    }

    float *p = new float[n];
    __m256 a, b;
    __m256 c = _mm256_setzero_ps();

#pragma omp parallel for
    for (size_t i = 0; i < n; i += 8)
    {
        a = _mm256_loadu_ps(p1 + i);
        b = _mm256_loadu_ps(p2 + i);
        c = _mm256_add_ps(c, _mm256_add_ps(a, b));
    }
    _mm256_storeu_ps(p, c);
    return p;
#else
    std::cerr << "AVX2 is not supported" << std::endl;
    return nullptr;
#endif
}