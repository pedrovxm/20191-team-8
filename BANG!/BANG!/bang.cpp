#include "cartas.h"
#include "bang.h"
#include <string>
#include <iostream>

Bang::Bang(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};
