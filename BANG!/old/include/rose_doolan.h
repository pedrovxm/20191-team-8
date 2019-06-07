#ifndef TP_ROSE_DOOLAN_H
#define TP_ROSE_DOOLAN_H

#include <string>
#include <iostream>
#include "personagem.h"

class RoseDoolan : public Personagem {
  public:
    RoseDoolan(int vida, std::string imagem) : Personagem(vida, imagem, "RoseDoolan", "Texto descritivo do personagem");
    void efeito() override;
};
#endif
