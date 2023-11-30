/*
Cuando un nuevo supermercado llega a la ciudad la estrategia común de mercadeo
es comenzar con una súper promoción para que la gente entre y lo conozca. Eso
fue precisamente lo que hizo MercaMasMas. Sin embargo, este supermercado quiso
ir fue más allá, prometiendo que daría la mejor promoción jamás vista. La
promoción era simple, el famoso pague 2 y lleve 3: si un cliente escogía, dentro
de una lista de artículos seleccionados, 3 de ellos diferentes, solo tendría que
pagar por 2. El truco era que a la hora de pagar el supermercado siempre elegía
como artículo a ser llevado gratis, a aquel con menor precio de los 3. Por
ejemplo, si el carro de compra incluye 6 productos diferentes con precios 400,
500 y 100, junto con 200, 600 y 300, el descuento que aplica el supermercado es
de 300. Algunos clientes rápidamente se dieron cuenta que si iban varias veces a
la caja en vez de una sola, y escogían cuidadosamente los artículos a llevar
cada vez, el descuento que podían conseguir era mayor. Por ejemplo, para el
mismo caso anterior, pero yendo dos veces a la caja, la primera con los
artículos con valor de 500, 600 y 400, y la segunda con los artículos de 200,
300 y 100; el descuento total sería de 500.

Entrada
La entrada comienza con un valor entero positivo en una única línea, no mayor a
20 y que consiste en la cantidad de casos de prueba. Cada caso consiste en dos
líneas. En la primera se encuentra el número de artículos a ser comprado (1 ≤ A
≤ 20000), mientras que en la segunda se encuentran A valores enteros positivos
separados por entre sí por un espacio en blanco con los precios de los artículos
correspondientes (1 ≤ P ≤ 50000).

Salida
Por cada caso de prueba se debe mostrar en una única línea cuál es el máximo
descuento que se puede obtener.

Ejemplo de entrada
2
6
400 500 100 200 600 300
3
1000 2000 3000

Ejemplo de salida
500
1000
*/

#include <algorithm>
#include <iostream>
#include <vector>
int main () {
  auto valor = 0;

  std::cin >> valor;

  for (auto caso = 0; caso < valor; caso++){
    auto lista = std::vector<int> {};
    
    auto productos = 0;
    std::cin >> productos;
    
    auto producto = 0;

    for (auto index = 0; index < productos; index++){
      std::cin >> producto;
      lista.push_back(producto);
    }

    std::sort(lista.begin(), lista.end());

    auto answer = 0;

    for (int index = lista.size() - 3; index >= 0; index-=3){
      answer += lista.at(index);
    }

    std::cout << answer << "\n";
  }
  
  return 0;
}
