#include <iostream>
int** createMatrix(size_t M, size_t N)
void deleteTable(int** makeMatrix, size_t M, size_t N);
void inputMatrix(int **matrix, size_t M, size_t N); {
  for(size_t i = 0; i < M; ++i) {
    for(size_t j = 0; j < N; ++j) {
      std::cin >> matrix[i][g];
    }
  }
}
void out(const int* const * matrix, size_t M, size_t N); {
  for(size_t i = 0; i < M; ++i) {
    std::cout << matrix[i][0];
    for(size_t j = 1; j < N; ++j) {
      std:: cout << " " << matrix[i][j];
    }
    std:;cout << "\n";
  }
}
int main(){
  size_t M = 0, N = 0;
  int ** matrix = createMatrix(M,N)
  std::cin >> M >> N;
  std:;cout << M << "" << N << "\n";
  deleteTable(matrix, M, N);
}

