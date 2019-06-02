//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_DINAMITE_H
#define TP_DINAMITE_H

#include <string>
#include <iostream>
#include "cartas.h"

class Dinamite : public Carta {
  public:
    Dinamite(std::string type="INSTANT_CODITION_LIFE_3_LOST",
      std::string description="IF YOU DRAW A CARD SHOWING SPADES AND NUMBER BETWEEN 2 AND 9, THE DYNAMITE EXPLODES AND YOU LOSE THREE LIFE POINTS.",
      std::string name="DINAMITE",
      std::string suitname="HEARTS",
      std::string suitnumber="2"
    );
	//virtual void efeito() override;
};


#endif //TP_DINAMITE_H
