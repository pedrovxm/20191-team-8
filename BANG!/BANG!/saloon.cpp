//
// Created by matheusmtta on 30/05/19.
//

#include <string>
#include <iostream>
#include "cartas.h"
#include "saloon.h"

Saloon::Saloon(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};
