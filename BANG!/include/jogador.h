#ifndef TP_JOGADOR_H
#define TP_JOGADOR_H
#include "papel.h"
#include "cartas.h"
#include <vector>
class Jogador {
	private:
		std::vector<Carta> mao;
		int range=1;
		int id;
	public:
		Jogador();
		~Jogador();

};

#endif // !TP_JOGADOR_H


