//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_ESQUIVA_H
#define TP_ESQUIVA_H

#include <string>
#include <iostream>
#include "cartas.h"

class Esquiva : public Cartas{
  virtual void efeito() override;
};


#endif //TP_ESQUIVA_H
