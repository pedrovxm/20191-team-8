#ifndef TP_PEDRO_RAMIREZ_H
#define TP_PEDRO_RAMIREZ_H

#include <string>
#include <iostream>
#include "personagem.h"

class PedroRamirez : public Personagem {
  public:
    void efeito() override;
};
#endif
