//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_ARMAR_H
#define TP_ARMAR_H

#include <string>
#include <iostream>
#include "cartas.h"

class Armar : public Cartas{
  virtual void efeito() override;
};


#endif //TP_ARMAR_H
