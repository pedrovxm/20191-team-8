//
// Created by gprimate on 10/05/19.
//

#ifndef TP_PAPEL_H
#define TP_PAPEL_H

#include <string>
#include <iostream>
#include <vector>



class Papel {
protected:
    std::string _descricao;
    std::string _objetivos;
    std::string _imagem;
    bool _visivel;
    int _bonus_vida;

public:
    virtual bool check_win(std::vector<Papel*> papeis) = 0;
    Papel(std::string descricao, std::string objetivos, std::string imagem, bool visivel, int bonus_vida);
};


#endif //TP_PAPEL_H
