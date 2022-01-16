#include <iostream>
#include <vector>
#include <iomanip>
#include<limits>
int main() {
  int x, y;
  std::cin >> x >> y;
  int s = 1, f = 1;
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      if ((i + j) % 2 == 0)
      {
        std::cout << std::setw(4) << s;
        s++;
      }
      else
      {
        std::cout << std::setw(4) << 0;
      }
      f *= -1;
    }
    std::cout << '\n';
  }
  return 0;
}