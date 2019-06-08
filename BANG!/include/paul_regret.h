#ifndef TP_PAUL_REGRET_H
#define TP_PAUL_REGRET_H

#include <string>
#include "personagem.h"

class PaulRegret : public Personagem {
  public:
    PaulRegret(int vida, std::string imagem) : Personagem(vida, imagem, "Paul Regret", "Texto descritivo do personagem"){};
    void efeito() override;
};
#endif
