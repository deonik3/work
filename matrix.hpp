#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
int** createMatrix(size_t M, size_t N);
void deleteTable(int** matrix, size_t M);
void inputMatrix(std::istream& in, int** matrix, size_t M, size_t N);
void output(std::ostream& out, const int* const* matrix, size_t M, size_t N);
#endif

