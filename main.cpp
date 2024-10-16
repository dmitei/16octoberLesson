#include <iostream>
#include "matrix.hpp"

int main()
{
  size_t m = 0, n = 0;
  std::cin >> m >> n;
  int ** mtx = createMatrix(m, n);
  std::cout << m << " " << n;
  clear(mtx,m,n);
}
