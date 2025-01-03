#include <iostream>
#include <cstdlib>
#include <chrono>
#include "vectoradd.hpp"
using namespace std;

#define TIME_STRAT start = std::chrono::steady_clock::now();
#define TIME_END(NAME)                                                                     \
    end = std::chrono::steady_clock::now();                                                \
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count(); \
    cout << (NAME)                                                                         \
         << ", duration = " << duration << "ms" << endl;

int main()
{
    size_t n = 2000000;
    float *p1 = new float[n];
    float *p2 = new float[n];

    float *result;

    p1[23] = 0.f;
    p2[24] = 1.f;
    p1[n - 1] = 2.f;
    p2[n - 1] = 2.f;

    auto start = std::chrono::steady_clock::now();
    auto end = std::chrono::steady_clock::now();
    auto duration = 0L;

    TIME_STRAT
    result = vectoradd(p1, p2, n);
    TIME_END("forloop")

    TIME_STRAT
    result = vectoradd_avx2(p1, p2, n);
    TIME_END("with_avx2")

    TIME_STRAT
    result = vectoradd_avx2_omp(p1, p2, n);
    TIME_END("with_avx2_omp")

    delete[] result;
    delete[] p1;
    delete[] p2;

    return 0;
}