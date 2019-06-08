#ifndef TP_SUZY_LAFAYETTE_H
#define TP_SUZY_LAFAYETTE_H

#include <string>
#include <iostream>
#include "personagem.h"

class SuzyLafayette : public Personagem {
  public:
    SuzyLafayette(int vida, std::string imagem) : Personagem(vida, imagem, "Suzy Lafayette", "Texto descritivo do personagem"){};
    void efeito() override;
};
#endif
