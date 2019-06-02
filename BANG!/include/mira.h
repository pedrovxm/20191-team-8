//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_MIRA_H
#define TP_MIRA_H

#include <string>
#include <iostream>
#include "cartas.h"

class Mira : public Carta{
  public:
    Mira(std::string type="SIGHT_MODIFIERS",
      std::string description="WHEN YOU'VE A SCOPE YOU SEE ALL OF YOUR ENEMYS DISTANCE'S FROM YOU IS DECREASED BY 1.",
      std::string name="MIRA",
      std::string suitname="SPADES",
      std::string suitnumber="A"
    );
  //virtual void efeito() override;
};


#endif //TP_MIRA_H
