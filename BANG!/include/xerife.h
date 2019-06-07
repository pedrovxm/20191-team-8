//
// Created by gprimate on 10/05/19.
//

#ifndef TP_XERIFE_H
#define TP_XERIFE_H


#include "papel.h"

class Xerife: public Papel {
public:
    virtual bool check_win(std::vector<Papel*> papeis) override;

    Xerife();
};



#endif //TP_XERIFE_H
