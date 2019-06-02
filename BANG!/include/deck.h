#ifndef TP_DECK_H
#define TP_DECK_H

#include <queue>
#include "cartas.h"
#include "jogador.h"
class Deck {
private:
	std::queue<Carta> cartas;
	void _adicionar_cartas();
public:
	Deck();
	~Deck();
	void comprar_carta(Jogador* jogador);
	int get_num_cartas();
};


#endif
