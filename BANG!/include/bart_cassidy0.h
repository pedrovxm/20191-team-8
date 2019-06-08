#ifndef TP_BART_CASSIDY_H
#define TP_BART_CASSIDY_H

#include <string>
#include <iostream>
#include "personagem.h"

class BartCassidy : public Personagem {
  public:
    BartCassidy(int vida, std::string imagem) : Personagem(vida, imagem, "Bart Cassidy", "Texto descritivo do personagem"){};
    void efeito() override;
};
#endif
