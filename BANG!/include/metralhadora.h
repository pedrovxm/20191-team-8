//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_METRALHADORA_H
#define TP_METRALHADORA_H

#include <string>
#include <iostream>
#include "cartas.h"

class Metralhadora : public Cartas{
  virtual void efeito() override;
};


#endif //TP_METRALHADORA_H
