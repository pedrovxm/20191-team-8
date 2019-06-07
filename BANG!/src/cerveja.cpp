#include <string>
#include <iostream>
#include "cartas.h"
#include "cerveja.h"
//#include "jogador.h"
//#include "papel.h"
//#include "dealer.h"

Cerveja::Cerveja(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};

// void Cerveja::get_effect(){
    //if(_holder < _holder->papel->max_hp)
//   _holder->healh_points+=1;
// } AUTO EXPLICATIVO, O JOGADOR QUE USA RECUPERA 1 DE VIDA, SE NÃO ESTIVER COM A VIDA MÁXIMA
