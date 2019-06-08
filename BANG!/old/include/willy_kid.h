#ifndef TP_WILLY_KID_H
#define TP_WILLY_KID_H

#include <string>
#include <iostream>
#include "personagem.h"

class WillyKid : public Personagem {
  public:
    WillyKid(int vida, std::string imagem) : Personagem(vida, imagem, "Willy Kid", "Texto descritivo do personagem"){};
    void efeito() override;
};
#endif
