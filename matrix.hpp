#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
int** createMatrix(size_t M, size_t N);
void deleteTable(int** matrix, size_t M);
void inputMatrix(int **matrix, size_t M, size_t N);
void out(const int* const * matrix, size_t M, size_t N);
#endif


