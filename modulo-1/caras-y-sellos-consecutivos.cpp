/*
Todo el mundo ha jugado cara y sello con una moneda. Si se escoge cara y sale
cara se gana, si se escoge sello y sale sello se gana, en los otros dos casos se
pierde. Se requiere escribir un programa para una variación de este famoso
juego. Se debe leer una secuencia de 40 lanzamientos y determinar cuántas veces
cada combinación posible de tres lanzamientos ocurre. Es decir, es necesario
determinar el número de veces que salen las ocho secuencias SSS, SSC, SCS, SCC,
CSS, CSC, CCS y CCC, considerando que tales secuencias se pueden superponer. Por
ejemplo si los 40 lanzamientos fueran cara, la secuencia CCC ocurriría 38 veces.

Entrada
La primera línea de la entrada contiene un único número entero P (1 <= P
<= 1000), que corresponde a la cantidad de conjuntos de lanzamientos. Cada
conjunto consiste de dos líneas. En la primera está el número del conjunto y en
la segunda la secuencia de 40 lanzamientos. Cada lanzamiento está representado
por una letra c mayúscula para cara y por una letra s mayúscula para sello. No
hay espacios en blanco en ninguna línea.

Salida
Por cada conjunto de lanzamientos hay una sola línea que contiene el número del
conjunto seguido por la cantidad de ocurrencias de cada secuencia según el orden
presentado anteriormente y con un espacio en blanco entre cada una. Debe haber
un total de nueve números enteros separados por espacio en blanco por cada
línea.

Ejemplo de entrada
3
1
CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
2
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
3
CCSSSCCSSSCSCCSCCSSCSSSCCCSCSSCSSCSSSCSC

Ejemplo de salida
1 0 0 0 0 0 0 0 38
2 38 0 0 0 0 0 0 0
3 4 7 6 4 7 4 5 1
*/
#include <iostream>
#include <string>
#include <unordered_map>
int main () {
  auto P = 0;
  std::cin >> P;

  for (auto lanzamiento = 0; lanzamiento < P; lanzamiento++){
    auto id = 0;
    std::cin >> id;

    std::unordered_map<std::string, int> contador = {
      {"SSS", 0},
      {"SSC", 0},
      {"SCS", 0},
      {"SCC", 0},
      {"CSS", 0},
      {"CSC", 0},
      {"CCS", 0},
      {"CCC", 0},
    };
    
    auto cadena = std::string("");
    std::cin >> cadena;

    auto buffer1 = std::string("") + cadena.at(0) + cadena.at(1);
    auto buffer2 = std::string("") + cadena.at(1);
    auto buffer3 = std::string("");

    for (auto index = 2; index < cadena.size(); index++){
      buffer1 += cadena.at(index);
      buffer2 += cadena.at(index);
      buffer3 += cadena.at(index);
      
      if (buffer1.size() == 3){
        contador[buffer1] += 1;
        buffer1 = "";
      }       
      
      if (buffer2.size() == 3){
        contador[buffer2] += 1;
        buffer2 = "";
      }
        
      if (buffer3.size() == 3){
        contador[buffer3] += 1;
        buffer3 = "";
      }
    }

    auto salida = std::string("");

    salida += 
    std::to_string(id) + " " +
    std::to_string(contador["SSS"]) + " " +
    std::to_string(contador["SSC"]) + " " +
    std::to_string(contador["SCS"]) + " " +
    std::to_string(contador["SCC"]) + " " +
    std::to_string(contador["CSS"]) + " " +
    std::to_string(contador["CSC"]) + " " +
    std::to_string(contador["CCS"]) + " " +
    std::to_string(contador["CCC"]); 

    std::cout << salida << std::endl;
  }
  
  return 0;
}
