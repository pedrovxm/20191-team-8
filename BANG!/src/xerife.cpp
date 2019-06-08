//
// Created by gprimate on 10/05/19.
//

#include "xerife.h"
#include "bandido.h"
#include "renegado.h"

Xerife::Xerife():
    Papel("Xerife", "Matar todos os bandidos e o renegado", "../assets/img/xerife.png", true, 1) {}

bool Xerife::check_win(std::vector<Papel*> papeis) {

    Papel* papel_compara;
    bool xerife_vivo = false;

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

        //Verifica se o xerife ainda está vivo

        papel_compara = dynamic_cast<Xerife*> (papeis[i]);

        if (papel_compara) {
            xerife_vivo = true;
        }
    }

    delete papel_compara;

    if (xerife_vivo) {
        return true;

    } else {
        return false;
    }
}