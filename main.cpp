#include <iostream>
#include <cstddef>
#include "matrix.h"

int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  std::cout << M << " " << N << "\n";
  try
  {
    int ** t = createMatrix(M,N);
    in(t, M, N);
    out(t, M, N);
    destroy(t, M);
  }
  catch(const std::bad_alloc & e)
  {
    return 1;
  }
}
