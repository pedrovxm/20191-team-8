//
// Edited by matheusmtta on 30/05/19.
//
#ifndef TP_ARMAR_H
#define TP_ARMAR_H

#include <string>
#include <iostream>
#include "cartas.h"


class Arma : public Carta {
  protected:
    int _range;
  public:
    Arma(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber, int range);
    //virtual void get_effect() override;
    //set the weapon's bang range
};


#endif //TP_ARMAR_H
