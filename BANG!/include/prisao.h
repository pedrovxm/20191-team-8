//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_PRISAO_H
#define TP_PRISAO_H

#include <string>
#include <iostream>
#include "cartas.h"

class Prisao : public Cartas{
  virtual void efeito() override;
};


#endif //TP_PRISAO_H
