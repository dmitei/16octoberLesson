#include <exception>
#include <iostream>
#include "matrix.hpp"

int main()
{
  size_t m = 0, n = 0;
  std::cin >> m >> n;
  try
  {
    int ** mtx = createMatrix(m, n);
  }
  catch (std::exception & e)
  {
    std::cerr << e.what()
  }
  std::cout << m << " " << n;
  clear(mtx,m);
}
