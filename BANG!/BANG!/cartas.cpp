//
// Edited by matheusmtta on 30/05/19.
//

#include "cartas.h"
#include <string>
#include <iostream>

Carta::Carta(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  _type(type), _description(description), _name(name), _suit_name(suitname), _suit_number(suitnumber) {}

std::string Carta::get_description(){
  return this->_description;
}

std::string Carta::get_type(){
  return this->_type;
}

std::string Carta::get_suit_name(){
  return this->_suit_name;
}

std::string Carta::get_suit_number(){
  return this->_suit_number;
}

std::string Carta::get_name(){
  return this->_name;
}

// void set_holder(jogador &jogador){
//   this->_holder = &jogador;
// }
//
// jogador get_holder(){
//   return _holder.id();
// }
