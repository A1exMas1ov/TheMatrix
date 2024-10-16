#include <iostream>
#include <cstddef>
#include "matrix.h"

int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  std::cout << M << " " << N << "\n";
  int** matrix = createMatrix(M,N);
  destroy(matrix, M, N);
}
