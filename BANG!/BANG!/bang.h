//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_BANG_H
#define TP_BANG_H

#include <string>
#include <iostream>
#include "cartas.h"

class Bang : public Carta {
  public:
    Bang(std::string type="INDIVIDUAL_AMMO_BANG",
      std::string description="THE PLAYER CAN SHOOT ANY REACHABLE ENEMY",
      std::string name="BANG!",
      std::string suitname="CLUBS",
      std::string suitnumber="5"
  );
	//virtual void efeito() override;
};


#endif //TP_Bang_H
