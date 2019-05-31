//
// Edited by matheusmtta on 30/05/19.
//
#ifndef TP_SALOON_H
#define TP_SALOON_H

#include <string>
#include <iostream>
#include "cartas.h"

class Saloon : public Carta {
  public:
    Saloon(std::string type="GROUP_LIFE_RECOVER",
      std::string description="ALL PLAYERS GAINS ONE POINT OF LIFE.",
      std::string name="SALAO",
      std::string suitname="SPADES",
      std::string suitnumber="5"
    );
	//virtual void efeito() override;
};


#endif //TP_SALOON_H
