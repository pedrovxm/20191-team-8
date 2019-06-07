#ifndef TP_BART_CASSIDY_H
#define TP_BART_CASSIDY_H

#include <string>
#include <iostream>
#include "personagem.h"

class BartCassidy : public Personagem {
  public:
    void efeito() override;
};
#endif
