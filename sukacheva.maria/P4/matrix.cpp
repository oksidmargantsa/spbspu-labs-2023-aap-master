#include "matrix.hpp"
#include <iostream>
#include <memory>
#include <limits>

size_t sukacheva::MaxSideDiagonal(int matrix[], size_t cols, size_t rows)
{
  if (cols != rows)
  {
    std::cerr << "There is no solution for this matrix.\n";
    return 2;
  }
  size_t maxDiagonal = 0;
  size_t diagonal = 0;
  int index = 0;
  for (int i = 1; i <= (cols + rows) - 1; i++)
  {
    diagonal = 0;
    (i > cols) ? (index = 2 * i - cols) : ( (i == 0) ? (index = 0) : (index = i));
    if (i != cols)
    {
      for (int j = 0; j < i; j++)
      {
        diagonal += matrix[index];
        index += cols - 1;
      }
      if (diagonal > maxDiagonal)
      {
        maxDiagonal = diagonal;
      }
     }
   }
  return maxDiagonal;
}