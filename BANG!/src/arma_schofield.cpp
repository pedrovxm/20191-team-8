//
// Created by matheusmtta on 30/05/19.
//

#include <string>
#include <iostream>
#include "cartas.h"
#include "arma.h"
#include "arma_schofield.h"

RevolverSchofield::RevolverSchofield(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber, int range):
  Arma(type, description, name, suitname, suitnumber, range) {};
