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
