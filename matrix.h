#ifndef MATRIX_H
#define MATRIX_H
void destroy(int ** t, size_t m);
int ** createMatrix(size_t N, size_t n);
void in(int ** t, size_t m, size_t n);
void out(const int * const * t, size_t m, size_t n);
#endif
