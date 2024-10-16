#include <iostream>

int ** createMatrix (size_t m, size_t n)
{
  // code
}

void dt (int ** mtx, size_t m, size_t n)
{
  //code
}

int main()
{
  size_t m = 0, n = 0;
  std::cin >> m >> n;
  int ** mtx = createMatrix(m, n);
  std::cout << m << " " << n;
  dt(mtx,m,n);
}
