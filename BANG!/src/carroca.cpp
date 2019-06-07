#include "cartas.h"
#include "carroca.h"
#include <iostream>
#include <string>
//#include "jogador.h"
//#include "deck.h"

//void Carroagem::get_effect(){
  //for(int i = 0; i < 3; i++)
    //_holder->comprar_carta();
//} //JOGADOR COM A CARTA EM MÃOS PODE COMPRAR 3 CARTAS

Carroca::Carroca(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};
