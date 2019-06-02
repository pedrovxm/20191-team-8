//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_CARRUAGEM_H
#define TP_CARRUAGEM_H

#include <string>
#include <iostream>
#include "cartas.h"
//#include "jogador.h"

class Carruagem : public Carta {
  public:
    Carruagem(std::string type="INDIVIDUAL_LIFE_RECOVER",
      std::string description="THE PLAYER CAN DRAW TWO CARDS FROM THE TOP OF THE DECK.",
      std::string name="CARRUAGEM",
      std::string suitname="SPADES",
      std::string suitnumber="9"
    );
	  //virtual void get_effect() override;
};


#endif //TP_CARRUAGEM_H
