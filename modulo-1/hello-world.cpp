/*
Usualmente el primer programa que todos hacemos cuando comenzamos a aprender
programación es el ultra famoso “Hello world!” que consiste en nada más y nada
menos que mostrar dicho mensaje. Para hacerlo más difícil (risa sarcástica),
supongamos que debemos mostrarlo, no una única vez, sino varias veces.

Entrada
La entrada una única línea con un valor entero positivo N no mayor a 1000.

Salida
N líneas con el mensaje “Hello world!” en cada una de ellas.

Ejemplo de entrada
3

Ejemplo de salida
Hello world!
Hello world!
Hello world!
*/

#include <iostream>
int main () {
  auto N = 0;

  std::cin >> N;

  for (auto hello = 0; hello < N; hello++){
    std::cout << "Hello world!" << "\n";
  }
  
  return 0;
}
