#include <string>
#include <iostream>
#include "cartas.h"
#include "dinamite.h"

Dinamite::Dinamite(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};

// void Dinamite::get_effect(){
//   //rand numero entre 1 a 100
//   //if numero < 20
//   //CABUM
//   //_holder->health_points-=3;
// }
//O JOGADOR IRÁ GIRAR UM NÚMERO ALEATÓRIO
//ASSIM, EXISTE 20% DE CHANCE DA DINAMITE EXPLODIR NELE
//SE EXPLODIR, O JOGADOR QUE ESTIVER COM ELA NA MAO PERDER 3 PONTOS DE VIDA!
