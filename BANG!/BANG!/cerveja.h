//
// Edited by matheusmtta on 30/05/19.
//
#ifndef TP_CERVEJA_H
#define TP_CERVEJA_H

#include <string>
#include <iostream>
#include "cartas.h"

class Cerveja : public Carta {
  public:
    Cerveja(std::string type="INDIVIDUAL_LIFE_RECOVER",
      std::string description="THE PLAYER REVOVERS ONE LIFE POINT.",
      std::string name="CERVEJA",
      std::string suitname="HEARTS",
      std::string suitnumber="8"
    );
	//virtual void efeito() override;
};


#endif //TP_Bang_H
