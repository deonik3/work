#include "classMatrix.hpp"
#include "matrix.hpp"

Matrix::Matrix(size_t rows, size_t columns) :
  rows(rows), columns(columns), matrix(::createMatrix(rows, columns))
{
}
void Matrix::input(std::istream& in)
{
  ::inputMatrix(in, matrix, rows, columns);
}
void Matrix::output(std::ostream& out) const
{
  ::output(out, matrix, rows, columns);
}
size_t Matrix::getRows() const
{
  return rows;
}
size_t Matrix::getColumns() const
{
  return columns;
}
Matrix::~Matrix()
{
  ::deleteTable(matrix, rows);
}

