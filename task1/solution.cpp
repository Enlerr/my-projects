#include <iostream>
#include<cmath>
#include<iomanip>
#include <vector>
#include <algorithm>
int main() {
  int a, b, c, im = -1, maxd = 1000000, i = 2;
  std::cin >> a >> b >> c;
  while (c != 0)
  {
    if (b > a && b > c)
    {
      if (im == -1)
      {
        im = i;
      }
      else
      {
        if (i - im < maxd)
        {
          maxd = i - im;
        }
        im = i;
      }
    }
    i++;
    a = b;
    b = c;
    std::cin >> c;
  }
  if (maxd == 1000000)
  {
    std::cout << 0;
  }
  else
    std::cout << maxd;
  return 0;
}