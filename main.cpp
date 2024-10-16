#include <iostream>

int createMatrix(size_t N, size_t n);
void destroy(int ** matrix, sixe_t m, size_t n);

int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  std::cout << M << " " << N << "\n";
<<<<<<< HEAD
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
=======
  int ** matrix = createMatrix(M,N);
  destroy(matrix, M, N);
>>>>>>> parent of 1189179 (matrix.h and matrix.cpp)
}


int createMatrix(size_t N, size_t n);
