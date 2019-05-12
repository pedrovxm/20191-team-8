//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_DINAMITE_H
#define TP_DINAMITE_H

#include <string>
#include <iostream>
#include "cartas.h"

class Dinamite : public Cartas{
  virtual void efeito() override;
};


#endif //TP_DINAMITE_H
