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

//ESSA FUNÇÃO SERÁ COMUM A TODAS AS CARTAS
//A CARTA IRÁ RECEBER O ENDEREÇO DE MEMÓRIA
//DO JOGADOR QUE POSSUI-LA, DE MODO QUE OS
//EFEITOS POSSAM SER UTILIZADOS DE FORMA
//INDIVIDUAL.
// void set_holder(jogador &jogador){
//   this->_holder = &jogador;
// }
//
//ESSA FUNÇÃO IRÁ RETORNAR O ID DO JOGADOR
//QUE ESTIVER COM CARTA, O QUE PODE SER ÚTIL
//EM CARTAS QUE ESTABELECEM UMA RELAÇÃO
//2X2, COMO O BANG!, ESQUIVA!, ETC.
// jogador get_holder(){
//   return _holder.id();
// }
