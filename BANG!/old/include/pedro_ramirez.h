#ifndef TP_PEDRO_RAMIREZ_H
#define TP_PEDRO_RAMIREZ_H

#include <string>
#include <iostream>
#include "personagem.h"

class PedroRamirez : public Personagem {
  public:
    PedroRamirez(int vida, std::string imagem) : Personagem(vida, imagem, "Pedro Ramirez", "Texto descritivo do personagem"){};
    void efeito() override;
};
#endif
