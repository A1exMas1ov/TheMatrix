#include <iostream>
#include "matrix.h"

int main()
{
  size_t M = 0, N = 0;
  if (!(std::cin >> M >> N))
  {
    std::cerr << "Rows or columns are not a number\n";
    return 1;
  }
  Matrix theMatrix(M, N);
  theMatrix.input();
  if (!std::cin)
  {
    std::cerr << "Elements are not a number\n";
    return 1;
  }
  theMatrix.output();
  theMatrix.resize(2,2);
  theMatrix.output();
  theMatrix.resize(3, 3);
  theMatrix.output();
}
