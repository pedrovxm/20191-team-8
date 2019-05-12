//
// Created by matheusmtta on 12/05/19.
//
#ifndef TP_CARTAS_H
#define TP_CARTAS_H

#include <string>
#include <iostream>

class Cartas {
protected:
    std::string tipo;
    std::string imagem;
    std::string descricao;
public:
    virtual void efeito();
    void set_tipo();
    void set_descricao();
    void set_imagem();
    std::string get_tipo();
    std::string get_descricao();
    std::string get_imagem();
};


#endif //TP_CARTAS_H
