//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_MUSTANG_H
#define TP_MUSTANG_H

#include <string>
#include <iostream>
#include "cartas.h"

class Mustang : public Carta{
  public:
    Mustang(std::string type="SIGHT_MODIFIERS",
      std::string description="OTHERS VIEW YOU AT DISTANCE +1.",
      std::string name="MUSTANG",
      std::string suitname="HEARTS",
      std::string suitnumber="9"
    );
  //virtual void efeito() override;
};


#endif //TP_MUSTANG_H
