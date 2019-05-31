#include <string>
#include <iostream>
#include "cartas.h"
#include "prisao.h"

Prisao::Prisao(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};
