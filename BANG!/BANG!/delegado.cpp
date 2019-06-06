//
// Created by gprimate on 10/05/19.
//

#include "delegado.h"
#include "bandido.h"
#include "renegado.h"

Delegado::Delegado():
    Papel("Delegado", "Proteger o xerife", "COLOCAR LINK IMAGEM", false, 0) {}

bool Delegado::check_win(std::vector<Papel*> papeis) {
    Papel* papel_compara;
    bool delegado_vivo = false;

    for (int i = 0; i < papeis.size(); i++) {

        //Verifica se é bandido

        papel_compara = dynamic_cast<Bandido*> (papeis[i]);

        if (papel_compara) {
            delete papel_compara;
            return false;
        }

        //Verifica se é renegado

        papel_compara = dynamic_cast<Renegado*> (papeis[i]);

        if (papel_compara) {
            delete papel_compara;
            return false;
        }

        //Verifica se algum delegado ainda está vivo

        papel_compara = dynamic_cast<Delegado*> (papeis[i]);

        if (papel_compara) {
            delegado_vivo = true;
        }
    }

    delete papel_compara;

    if (delegado_vivo) {
        return true;

    } else {
        return false;
    }
}