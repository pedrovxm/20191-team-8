//
// Created by matheusmtta on 30/05/19.
//
#ifndef TP_ARMA_WINCHESTER_H
#define TP_ARMA_WINCHESTER_H

#include <string>
#include <iostream>
#include "cartas.h"
#include "arma.h"

class Winchester : public Arma {
  public:
    Winchester(std::string type="SIGHT_MODIFYER",
      std::string description="THE PLAYER CAN INCREASES HIS BANG! FIRE RANGE",
      std::string name="RIFLE WINCHESTER",
      std::string suitname="SPADES",
      std::string suitnumber="8",
      int range = 5);
};


#endif //TP_ARMA_WINCHESTER_H
