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
    Carruagem(): //Set the type and description of the card
      Carta("INDIVIDUAL_CARD_GETTER",
      "THE PLAYER CAN DRAW THREE CARDS FROM THE TOP OF THE DECK",
      "CARRUAGEM", "SPADES", 9) {}
	  //virtual void get_effect() override;
};


#endif //TP_CARRUAGEM_H
