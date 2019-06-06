//
// Created by gprimate on 10/05/19.
//

#ifndef TP_DELEGADO_H
#define TP_DELEGADO_H


#include "papel.h"


class Delegado: public Papel {
public:
    virtual bool check_win(std::vector<Papel*> papeis) override;

    Delegado();
};


#endif //TP_DELEGADO_H
