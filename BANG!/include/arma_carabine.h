//
// Created by matheusmtta on 30/05/19.
//
#ifndef TP_ARMA_CARABINE_H
#define TP_ARMA_CARABINE_H

#include <string>
#include <iostream>
#include "cartas.h"
#include "arma.h"

class Carabine : public Arma {
  public:
    Carabine(std::string type="SIGHT_MODIFYER",
      std::string description="THE PLAYER CAN INCREASE HIS BANG! FIRE RANGE",
      std::string name="CARABINA",
      std::string suitname="CLUBS",
      std::string suitnumber="A",
      int range = 4);
};


#endif //TP_ARMA_CARABINE_H
