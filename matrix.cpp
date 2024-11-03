#include "matrix.h"
#include <iostream>

void inputMatrix(int ** theMatrix, size_t m, size_t n)
{
  for (size_t i = 0; i < m; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      std::cin >> theMatrix[i][j];
    }
  }
}

void outputMatrix(const int * const * theMatrix, size_t m, size_t n)
{
  for (size_t i = 0; i < m; ++i)
  {
    std::cout << theMatrix[i][0];
    for (size_t j = 1; j < n; ++j)
    {
      std::cout << " " << theMatrix[i][j];
    }
    std::cout << "\n";
  }
}

void destroyMatrix(int ** theMatrix, size_t m)
{
  for (size_t i = 0; i < m; ++i)
  {
    delete[] theMatrix[i];
  }
  delete[] theMatrix;
}

int ** createMatrix(size_t m, size_t n)
{
  int ** theMatrix = new int*[m];
  size_t created = 0;
  try
  {
    for (; created < m; ++created)
    {
      theMatrix[created] = new int[n];
    }
  }
  catch (const std::bad_alloc & e)
  {
    destroyMatrix(theMatrix, created);
    throw;
  }
  return theMatrix;
}

size_t Matrix::getRows() const
{
  return m_;
}

size_t Matrix::getColumns() const
{
  return n_;
}

void Matrix::fill(int value)
{
  for (size_t i = 0; i < m_; i++)
  {
    for (size_t j = 0; j < n_; j++)
    {
      t_[i][j] = value;
    }
  }
}

void Matrix::resize(size_t newM, size_t newN)
{
  int ** newMatrix = nullptr;
  try
  {
    newMatrix = createMatrix(newM, newN);
  }
  catch (const std::bad_alloc & e)
  {
    std::cerr << "Out of memory\n";
    return;
  }
  for (size_t i = 0; i < std::min(m_, newM); i++)
  {
    for (size_t j = 0; j < std::min(n_, newN); j++)
    {
      newMatrix[i][j] = t_[i][j];
    }
  }
  for (size_t i = std::min(m_, newM); i < newM; i++)
  {
    for (size_t j = 0; j < newN; j++)
    {
      newMatrix[i][j] = 0;
    }
  }
  destroyMatrix(t_, m_);
  t_ = newMatrix;
  m_ = newM;
  n_ = newN;
}

void copyMatrix(int ** destination, const int *const * source, size_t m, size_t n)
{
  for (size_t i = 0; i < m; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      destination[i][j] = source[i][j];
    }
  }
}
