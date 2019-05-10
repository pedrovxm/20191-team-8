//
// Created by gprimate on 10/05/19.
//

#ifndef TP_BANDIDO_H
#define TP_BANDIDO_H


#include "papel.h"

class Bandido: public Papel {
public:
    virtual void check_win() override;
};


#endif //TP_BANDIDO_H
