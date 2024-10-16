#include <iostream>

int ** createMatrix (size_t m, size_t n)
{
  // code
}

void input(int ** mtx, size_t m, size_t n)
{
  for (size_t i = 0; i < m; ++i)
  {
    for (size_t j = 0; j < n; ++j)
    {
      std::cin >> mtx[i][j];
    }
  }
}

void output(const int ** mtx, size_t m, size_t n)
{
  for (size_t i = 0; i < m; ++i)
  {
    std::cout << mtx[i][0];
    for (size_t j = 1; j < n; ++j)
    {
      std::cout << " " << mtx[i][j];
    }
    std::cout << "\n";
  }
}

void clear(int ** mtx, size_t m, size_t n)
{
  
}

int main()
{
  size_t m = 0, n = 0;
  std::cin >> m >> n;
  int ** mtx = createMatrix(m, n);
  std::cout << m << " " << n;
  clear(mtx,m,n);
}
