#ifndef MATRIX_H
#define MATRIX_H

#include <cstddef>

int ** createMatrix(size_t m, size_t n);
void destroyMatrix(int ** theMatrix, size_t m);
void inputMatrix(int ** theMatrix, size_t m, size_t n);
void outputMatrix(const int * const * theMatrix, size_t m, size_t n);

#endif
