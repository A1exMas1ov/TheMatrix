#include <iostream>

int createMatrix(size_t N, size_t n);
void destroy(int ** matrix, sixe_t m, size_t n);

int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  std::cout << M << " " << N << "\n";
  int ** matrix = createMatrix(M,N);
  destroy(matrix, M, N);
}


int createMatrix(size_t N, size_t n);
