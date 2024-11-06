#include "matrix.hpp"
#include <iostream>
int** createMatrix(size_t M, size_t N)
{
  int** matrix = new int*[M];
  size_t created = 0;
  try
  {
    for (; created < N; ++created)
    {
      matrix[created] = new int[N];
    }
  }
  catch (const std::bad_alloc& e)
  {
    deleteTable(matrix, created);
    throw;
  }
  return matrix;
}
void deleteTable(int** matrix, size_t M)
{
  for (size_t i = 0; i < M; ++i)
  {
    delete[] matrix[i];
  }
  delete[] matrix;
}
void inputMatrix(std::istream& in, int** matrix, size_t M, size_t N)
{
  for (size_t i = 0; i < M; ++i)
  {
    for (size_t j = 0; j < N; ++j)
    {
      in >> matrix[i][j];
    }
  }
}
void output(std::ostream& out, const int* const* matrix, size_t M, size_t N)
{
  for (size_t i = 0; i < M; ++i)
  {
    std::cout << matrix[i][0];
    for (size_t j = 1; j < N; ++j)
    {
      out << " " << matrix[i][j];
    }
    out << "\n";
  }
}

