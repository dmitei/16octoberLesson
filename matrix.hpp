#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <cstddef>

int ** createMatrix (size_t m, size_t n);
void input(int ** mtx, size_t m, size_t n);
void output(const int ** mtx, size_t m, size_t n);
void clear(int ** mtx, size_t m);

#endif
