//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_DUELO_H
#define TP_DUELO_H

#include <string>
#include <iostream>
#include "cartas.h"

class Duelo : public Cartas{
  virtual void efeito() override;
};


#endif //TP_DUELO_H
