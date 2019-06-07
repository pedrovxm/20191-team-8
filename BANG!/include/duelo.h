//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_DUELO_H
#define TP_DUELO_H

#include <string>
#include <iostream>
#include "cartas.h"

class Duelo : public Carta{
public:
  Duelo(std::string type="OFFENSIVE",
    std::string description="YOU CAN CHALLENGE A PLAYER FOR A DUEL, NONE DEFENSIVE CARDS CAN BE USED TO FLEE AWAY. THE PLAYERS MUST TRADE OF BANGS! UNTIL ONE OF THEM FAIL.",
    std::string name="DUELO",
    std::string suitname="DIAMONDS",
    std::string suitnumber="Q"
  );
//virtual void efeito() override;
};


#endif //TP_DUELO_H
