//
// Created by matheusmtta on 30/05/19.
//
#ifndef TP_CARROCA_H
#define TP_CARROCA_H

#include <string>
#include <iostream>
#include "cartas.h"

class Carroca : public Carta {
public:
  Carroca(): //Set the type and description of the card
    Carta("INDIVIDUAL_CARD_GETTER",
    "THE PLAYER CAN DRAW THREE CARDS FROM THE TOP OF THE DECK",
    "TRANSPORTE", "HEARTS", "3") {}
  //virtual void get_effect() override;
};

//NÃO TEM O SCAN DA CARTA

#endif //TP_CARROCA_H
