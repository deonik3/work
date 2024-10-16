#include <iostream>
#include "matrix.hpp"
int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  int** matrix = nullptr;
  try {
    matrix = createMatrix(M, N);
  }catch (std::bad_alloc & e) {
    return 1;
  }
  deleteTable(matrix, M);
}

