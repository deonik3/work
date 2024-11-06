#include <iostream>
#include "classMatrix.hpp"
int main()
{
  size_t rows = 0, columns = 0;
  std::cin >> rows >> columns;
  if (!std::cin)
  {
    std::cerr << "Invalid input\n";
    return 1;
  }
  try
  {
    Matrix matrix(rows, columns);
    matrix.input(std::cin);
    if (!std::cin.good())
    {
      std::cerr << "Incorrect input matrix\n";
      return 1;
    }
    matrix.output(std::cout);
    return 0;
  }
  catch (const std::bad_alloc& e)
  {
    std::cerr << "Out of Memory\n";
    return 1;
  }
}

