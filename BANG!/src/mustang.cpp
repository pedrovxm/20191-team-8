#include <string>
#include <iostream>
#include "cartas.h"
#include "mustang.h"

Mustang::Mustang(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};

// void Mustang::get_effect(){
//   for (int i = 0; i < _holder->alive_enemies; i++)
//     _holder->distance[alive_enemies]++;
// //não tive outra ideia de como implementar isso, vai depender muito dar váriaveis utilizadas pra definir distância/range/etc
// }
