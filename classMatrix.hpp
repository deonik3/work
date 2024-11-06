#ifndef CLASSMATRIX_HPP
#define CLASSMATRIX_HPP
#include <fstream>
class Matrix
{
  size_t rows, columns;
  int** matrix;

public:
  Matrix(size_t rows, size_t columns);
  size_t getRows() const;
  size_t getColumns() const;
  void input(std::istream& in);
  void output(std::ostream& out) const;
  ~Matrix();
};
#endif

