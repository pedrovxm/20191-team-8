#include "cartas.h"
#include "carroagem.h"
#include <iostream>
#include <string>
//#include "jogador.h"
//#include "deck.h"

Carruagem::Carruagem(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};

//void Carroagem::get_effect(){
  //for(int i = 0; i < 2; i++)
    //_holder->comprar_carta();
//}//JOGADOR COM A CARTA EM MÃOS PODE COMPRAR 2 CARTAS
