//
// Created by gprimate on 10/05/19.
//

#include "bandido.h"
#include "xerife.h"

Bandido::Bandido():
    Papel("Bandido", "Matar o xerife", "../assets/img/foradalei.png", false, 0) {}

bool Bandido::check_win(std::vector<Papel*> papeis) {

    Papel* papel_compara;

    for (int i = 0; i < papeis.size(); i++) {

        //Verifica se é xerife

        papel_compara = dynamic_cast<Xerife*> (papeis[i]);

        if(papel_compara) {
            delete papel_compara;
            return false;
        }
    }

    delete papel_compara;
    return true;
}