//
// Created by gprimate on 10/05/19.
//

#ifndef TP_PAPEL_H
#define TP_PAPEL_H


#include <string>
#include <iostream>

class Papel {
	protected:
		std::string descricao;
		std::string objetivos;
		std::string imagem;
		bool visivel;
		int bonus_vida;

	public:
		virtual void check_win();
};


#endif //TP_PAPEL_H
