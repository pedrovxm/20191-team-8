//
// Created by gprimate on 10/05/19.
//

#include "renegado.h"

Renegado::Renegado():
    Papel("Renegado", "Ser o último jogador no jogo", "COLOCAR LINK IMAGEM", false, 0) {}


bool Renegado::check_win(std::vector<Papel*> papeis) {

    if (papeis.size() > 1) {
        return 0;

    } else {

        //Verifica se o único  papel restante é um renegado

        Papel* papel_compara = dynamic_cast<Renegado*> (papeis[0]);

        if (papel_compara) {
            delete papel_compara;
            return true;

        } else {
            delete papel_compara;
            return false;

        }
    }
}
