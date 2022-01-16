#include <iostream>
#include <vector>
int main() {
  int n, k, l, r;
  std::cin >> n >> k;
  std::vector<char> a(n);
  for (int i = 0; i < n; i++)
    a[i] = 'I';
  for (int i = 0; i < k; i++)
  {
    std::cin >> l >> r;
    for (int j = l - 1; j < r; j++)
      a[j] = '.';
  }
  for (int i = 0; i < n; i++)
    std::cout << a[i];
  return 0;
}