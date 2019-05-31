//
// Edited by matheusmtta on 30/05/19.
//

#include "cartas.h"
#include "arma.h"
#include <iostream>
#include <string>

//#include "jogador.h"
//#include "deck.h"

// void Arma::get_effect(){
//   //jogador->set_range(_range);
// }

Arma::Arma(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber, int range):
  Carta(type, description, name, suitname, suitnumber), _range(range) {};
