#ifndef TP_BLACK_JACK_H
#define TP_BLACK_JACK_H

#include <string>
#include <iostream>
#include "personagem.h"

class BlackJack : public Personagem {
  public:
    BlackJack(int vida, std::string imagem) : Personagem(vida, imagem, "Black Jack", "Texto descritivo do personagem"){};
    void efeito() override;
};
#endif
