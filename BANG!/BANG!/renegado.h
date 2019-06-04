//
// Created by gprimate on 10/05/19.
//

#ifndef TP_RENEGADO_H
#define TP_RENEGADO_H


#include "papel.h"

class Renegado: public Papel {
public:
    virtual void check_win() override;

    Renegado();
};


#endif //TP_RENEGADO_H
