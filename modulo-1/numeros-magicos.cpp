/*
Un número mágico es aquel cuya suma de divisores (sin contarse a él) es igual a
sí mismo. Por ejemplo 6 es un número mágico pues 1 + 2, + 3 = 6. Así mismo, 28
es un número mágico pues 1 + 2 + 4 + 7 + 14 = 28.

Entrada
La entrada comienza con una línea que contiene un valor entero positivo C (1 ≤ C
≤ 100) que corresponde a la cantidad de casos de prueba. Cada caso de prueba
consiste en dos valores enteros positivos A y B separados entre sí por un
espacio en blanco (1 < A < B ≤ 10.000).

Salida
La salida debe tener C líneas, una por cada caso de prueba. En cada línea debe
aparecer la cantidad de números mágicos en [A, B].

Ejemplo de entrada
3
5 30
50 65
480 500
Ejemplo de salida
2
0
1
*/

#include <cmath>
#include <iostream>

int primos(int n){
  auto answer = 1;
  
  for (auto i = 2; i <= std::sqrt(n); i++){
    if (n % i == 0){
      answer += i;
      auto d = n/i;
      if (d != i) answer += d;
    }
  }

  if (answer == n) return 1;
  else return 0;
}

int main () {
  auto C = 0;

  std::cin >> C;

  for (auto i = 0; i < C; i++){
    auto contador = 0;
    
    auto inferior = 0;
    auto superior = 0;

    std::cin >> inferior;
    std::cin >> superior;

    for (auto i = inferior; i <= superior; i++){
      contador += primos(i);
    }

    std::cout << contador << "\n";
    
  }
  
  return 0;
}
