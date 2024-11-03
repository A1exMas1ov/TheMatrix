#ifndef MATRIX_H
#define MATRIX_H

#include <cstddef>

int ** createMatrix(size_t m, size_t n);
void destroyMatrix(int ** theMatrix, size_t m);
void inputMatrix(int ** theMatrix, size_t m, size_t n);
void outputMatrix(const int * const * theMatrix, size_t m, size_t n);
void copyMatrix(int ** destination, const int * const * source,
    size_t m, size_t n);

struct Matrix
{
  Matrix(size_t M, size_t N):
    t_(::createMatrix(M, N)), m_(M), n_(N)
  {}
  Matrix(const Matrix & source):
    t_(::createMatrix(source.m_, source.n_)),
    m_(source.m_),
    n_(source.n_)
    {
      ::copyMatrix(t_, source.t_, m_, n_);
    }
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
  size_t getRows() const;
  size_t getColumns() const;
  void fill(int value);
  void resize(size_t newM, size_t newN);
 private:
  int ** t_;
  size_t m_, n_;
};

#endif
