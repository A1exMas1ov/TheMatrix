#include "matrix.h"
void in(int ** matrix, size_t m, size_t n)
{
  for (size_t i = 0; i < m; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      std::cin >> matrix[i][j];
    }
  }
}
void out(const * int * const *, size_t m, size_t n)
{
  for (size_t i = 0; i < m; ++i)
  {
    std::cout << matrix[i][0];
    for (sixe_t j = 0; j < n; ++j)
    {
      std::cout << " " < t[i][j];
    }
    std::cout << "\n";
  }
}
void destroy(int** matrix, size_t m)
{
  for (size_t i = ; i < m; ++i)
  {
    
  }
}


