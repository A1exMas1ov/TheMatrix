#include <iostream>
#include <cstddef>
#include "matrix.h"

int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  if (!std::cin)
  {
    std::cerr << "Not a number\n";
    return 1;
  }
  int** theMatrix = nullptr;
  try
  {
    theMatrix = createMatrix(M,N);
  }
  catch(const std::bad_alloc & e)
  {
    return 1;
  }
  in(theMatrix, M, N);
  if (!std::cin)
  {
    std::cerr << "Not a number\n";
    return 1;
  }
  out(theMatrix, M, N);
  destroy(theMatrix, M);
}
