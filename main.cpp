#include <iostream>
#include "matrix.h"

int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  if (!std::cin)
  {
    std::cerr << "Rows or columns are not a number\n";
    return 1;
  }
  int ** theMatrix = nullptr;
  try
  {
    theMatrix = createMatrix(M,N);
  }
  catch (const std::bad_alloc & e)
  {
    return 1;
  }
  inputMatrix(theMatrix, M, N);
  if (!std::cin)
  {
    destroyMatrix(theMatrix, M);
    std::cerr << "Elements are not a number\n";
    return 1;
  }
  outputMatrix(theMatrix, M, N);
  destroyMatrix(theMatrix, M);
}
