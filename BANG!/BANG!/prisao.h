//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_PRISAO_H
#define TP_PRISAO_H

#include <string>
#include <iostream>
#include "cartas.h"

class Prisao : public Carta{
  public:
    Prisao(std::string type="JAIL",
      std::string description="YOU MAY LOST YOUR TURN, LET'S SEE YOUR LUCK.",
      std::string name="JAIL",
      std::string suitname="SPADES",
      std::string suitnumber="10"
    );
    //virtual void efeito() override;
};


#endif //TP_PRISAO_H
