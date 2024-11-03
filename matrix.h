#ifndef MATRIX_H
#define MATRIX_H

#include <cstddef>

int ** createMatrix(size_t m, size_t n);
void destroyMatrix(int ** theMatrix, size_t m);
void inputMatrix(int ** theMatrix, size_t m, size_t n);
void outputMatrix(const int * const * theMatrix, size_t m, size_t n);

class Matrix
{
public:
  Matrix(size_t M, size_t N):
    t_(::createMatrix(M, N)), m_(M), n_(N)
  {}
  ~Matrix()
  {
    ::destroyMatrix(t_, m_);
  }
  void input()
  {
    ::inputMatrix(t_, m_, n_);
  }
  void output()
  {
    ::outputMatrix(t_, m_, n_);
  }
private:
  int ** t_;
  size_t m_, n_;
};

#endif
