//
// Created by matheusmtta on 30/05/19.
//
#ifndef TP_ARMAR_SCHOFIELD_H
#define TP_ARMAR_SCHOFIELD_H

#include <string>
#include <iostream>
#include "cartas.h"
#include "arma.h"

class RevolverSchofield : public Arma {
  public:
    RevolverSchofield(std::string type="SIGHT_MODIFYER",
      std::string description="THE PLAYER CAN INCREASES HIS BANG! FIRE RANGE",
      std::string name="REVOLVER SCHOFIELD",
      std::string suitname="CLUBS",
      std::string suitnumber="J",
      int range = 2);
};


#endif //TP_ARMAR_SCHOFIELD_H
