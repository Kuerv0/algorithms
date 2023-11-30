/*
Este problema es bastante sencillo en realidad. Dados dos valores enteros se
debe determinar si a) el primero es mayor que el segundo, o si b) el segundo es
mayor que el primero, o si c) son iguales.

Entrada
La primera línea de la entrada consiste en un entero t (t<=100) que denota
cuantos conjuntos de datos hay. Cada una de las t siguientes líneas contienen
dos números a y b separados por un espacio en blanco (|a|, |b| < 1000000000).

Salida
Cada paraje de números de la entrada produce una línea de salida que consiste en
un carácter ‘<’, ‘>’ o ‘=’ que indica la correspondiente relación entre el
primero y el segundo número.

Ejemplo de entrada
3
10 20
20 10
10 10

Ejemplo de salida
<
>
=
*/

#include <iostream>

int main () {
  auto t = 0;
  auto uno = 0;
  auto dos = 0;

  std::cin >> t;

  for (auto conjuntos = 0; conjuntos < t; conjuntos++){
    std::cin >> uno;
    std::cin >> dos;

    if (uno > dos) std::cout << ">" << "\n";
    else if (uno < dos) std::cout << "<" << "\n";
    else std::cout << "=" << "\n";

    // if (uno > dos){ 
    //   std::cout << ">" << "\n";
    // }
    // else if (uno < dos){
    //   std::cout << "<" << "\n";
    // }
    // else{
    //    std::cout << "=" << "\n";
    // } 
  }
  
  return 0;
}
