#ifndef TP_EL_GRINGO_H
#define TP_EL_GRINGO_H

#include <string>
#include <iostream>
#include "personagem.h"

class ElGringo : public Personagem {
  public:
    ElGringo(int vida, std::string imagem) : Personagem(vida, imagem, "El Gringo", "Texto descritivo do personagem"){};
    void efeito() override;
};
#endif
