//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_ESQUIVA_H
#define TP_ESQUIVA_H

#include <string>
#include <iostream>
#include "cartas.h"

class Esquiva : public Carta{
  public:
    Esquiva(std::string type="DEFENSIVE",
      std::string description="PLAY TO AVOID A BANG! OR ANOTHER OFENSIVE CARD (YOU CANNOT USE IT TO AVOID A DUEL).",
      std::string name="ESQUIVA",
      std::string suitname="CLUBS",
      std::string suitnumber="Q"
    );
  //virtual void get_effect() override; //não encontrei uma utilidade prática pra essa função nessa carta, haja vista que ela tem uma interface void 
  //bool check_esquiva();
};


#endif //TP_ESQUIVA_H
