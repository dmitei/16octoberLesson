#include "matrix.hpp"
#include <iostream>
#include <new>

int ** createMatrix (size_t m, size_t n)
{
  int ** mtx = new int *[m];
  size_t created = 0;
  try
    {
      for (; created < n; ++created)
      {
        mtx[created] = new int[n];
      }
    }
  catch (const std::bad_alloc &e) {
    clear(mtx, created);
    throw;
  }
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

void clear(int ** mtx, size_t m)
{
  for (size_t i = 0; i < m; ++i)
  {
    delete[] mtx[i];
  }
  delete[] mtx;    
}


