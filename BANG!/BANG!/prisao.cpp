#include <string>
#include <iostream>
#include "cartas.h"
#include "prisao.h"

Prisao::Prisao(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};

// void Prisao::get_effect(){
//   int busted=0;
//   busted = NUMERO ALEATORIO ENTRE 1 E 100
//   SE BUSTED < 31
//     dealer->next_turn();
// } //O JOGADOR QUE RECEBER ESSA Carta
//TERA 30% DE CHANCE DE PERDER A VEZ.
