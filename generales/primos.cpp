#include <cmath>
#include <iostream>
#include <vector>

// Guarda los divisores de un número n.

int main () {

  auto n = 0;

  std::cin >> n;

  auto divisores = std::vector<int> {1, n};
  
  for (auto i = 2; i <= std::sqrt(n); i++){
    if (n % i == 0){
      divisores.push_back(i);
      auto d = n/i;
      if (d != i) divisores.push_back(d);
    }
  }
  
  return 0;
}
