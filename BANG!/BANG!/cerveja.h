//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_CERVEJA_H
#define TP_CERVEJA_H

#include <string>
#include <iostream>
#include "cartas.h"

class Cerveja : public Cartas {
	virtual void efeito() override;
};


#endif //TP_Bang_H
