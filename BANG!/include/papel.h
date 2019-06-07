//
// Created by gprimate on 10/05/19.
//

#ifndef TP_PAPEL_H
#define TP_PAPEL_H


#include <string>
#include <iostream>


class Papel {
protected:
    std::string _descricao;
    std::string _objetivos;
    std::string _imagem;
    bool _visivel;
    int _bonus_vida;

public:
    virtual void check_win();
    Papel(std::string descricao, std::string objetivos, std::string imagem, bool visivel, int bonus_vida);
};


#endif //TP_PAPEL_H

