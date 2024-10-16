#ifndef MATRIX_H
#define MATRIX_H
int** createMatrix(size_t m, size_t n);
void destroy(int** theMatrix, size_t m);
void in(int** theMatrix, size_t m, size_t n);
void out(const int* const* theMatrix, size_t m, size_t n);
#endif
