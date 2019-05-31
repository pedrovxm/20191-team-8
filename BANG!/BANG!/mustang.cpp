#include <string>
#include <iostream>
#include "cartas.h"
#include "mustang.h"

Mustang::Mustang(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};
