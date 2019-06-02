//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_METRALHADORA_H
#define TP_METRALHADORA_H

#include <string>
#include <iostream>
#include "cartas.h"

class Metralhadora : public Carta{
  public:
    Metralhadora(std::string type="OFFENSIVE_BANG!",
      std::string description="YOU MAY SHOOT A BANG! TO ALL THE PLAYERS THAT YOU WANT, REGARDLESS!!! THIS DOES NOT COUNT AS A BANG, SO YOU CAN USE A BANG! IN THE TURN AS WELL.",
      std::string name="METRALHADORA",
      std::string suitname="HEARTS",
      std::string suitnumber="10"
    );
  //virtual void efeito() override; //eu particularmente não acho uma boa ideia implementar essa função, fica a critério de vocês
  //não consigo imaginar uma forma simples de fazer isso
};


#endif //TP_METRALHADORA_H
