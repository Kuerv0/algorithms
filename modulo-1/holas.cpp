
/*
El español, inglés, alemán, francés, italiano y ruso son 6 de los más
importantes idiomas en el mundo. Normalmente cuando se aprende uno de esos
idiomas, una de las primeras palabras que se aprende a decir es “hola”, que en
inglés se dice “hello”, en alemán “hallo”, en francés “bonjour”, en italiano
“ciao”, y en ruso “zdravstvujte”

Entrada
La entrada contiene no más de 100 líneas. Cada línea contiene una única palabra
de no más de 15 caracteres, todos en mayúsculas. La entrada termina con una
línea que contiene el carácter ‘#’, esta línea no debe procesarse.

Salida
Por cada i-esima palabra de la entrada, imprimir en una línea “Palabra i: ” más
el idioma correspondiente escrito en mayúsculas: “ESPANOL”, “INGLES”, “ALEMAN”,
“FRANCES”, “ITALIANO” o “RUSO”. Nótese que no se usa puntuación y que
“ESPANOL” tiene una “N” en vez de una “Ñ”. Si la i-ésima palabra no corresponde
a ninguna de las seis formas de decir “hola”, en vez del idioma se debe escribir
“DESCONOCIDO”.

Ejemplo de entrada
HOLA
HALLO
CIAO
OLA.K.ASE
#

Ejemplo de salida
Palabra 1: ESPANOL
Palabra 2: ALEMAN
Palabra 3: ITALIANO
Palabra 4: DESCONOCIDO
*/

#include <iostream>
#include <string>
#include <unordered_map>
int main () {
  auto saludos = std::unordered_map<std::string, std::string> {
  {"HOLA", "ESPANOL"},
  {"HELLO", "INGLES"},
  {"HALLO", "ALEMAN"},
  {"BONJOUR", "FRANCES"},
  {"CIAO", "ITALIANO"},
  {"ZDRAVSTVUJTE", "RUSO"},
  };

  auto saludo = std::string("");
  auto contador = 0;

  while(true){
    contador++;
    
    std::cin >> saludo;
    
    if (saludo == "#") break;

    auto salida = std::string("");

    salida = "Palabra " + std::to_string(contador) + ": ";
    
    auto idioma = saludos[saludo];
    if(idioma == ""){
      std::cout << salida + "DESCONOCIDO\n";
      continue;
    }

    std::cout << salida + idioma + "\n";
    
  }
  
  return 0;
}
