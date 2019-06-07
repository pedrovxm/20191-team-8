#include <string>
#include <iostream>
#include "cartas.h"
#include "metralhadora.h"

Metralhadora::Metralhadora(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};
