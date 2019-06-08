#ifndef TP_JOGADOR_H
#define TP_JOGADOR_H
#include "papel.h"
#include "cartas.h"
#include "personagem.h"
#include <vector>
#include <memory>
class Jogador {
	private:
		std::vector<Carta *> _mao;
		int _id;
		int _vida;
		bool _mira;
		int _range;
		int _tempo_prisao;
		bool _prisao;
		bool _mustang;
		bool _dinamite;
		Personagem *_personagem;
		Papel *_papel;
	public:
		Jogador(Personagem *personagem, Papel *papel, int id);
		~Jogador();
		void comprar_carta(Carta *cartas);
		void usar_carta(Carta *carta);
		void set_range(int range);
		int get_range();
		void prende();
		void set_prisao(bool prisao);
		bool get_prisao();
		void set_id(int id);
		int get_id();
		void dano();
		void set_vida(int vida);
		int get_vida();
		void equipa_mira();
		bool get_mira();
		void set_tempo_prisao(int tempo_prisao);
		bool get_mustang();
		void equipa_mustang();
		bool get_dinamite();
		void set_dinamite(bool dinamite);
		Personagem * get_personagem();
		std::vector<Carta *> get_mao();
};

#endif // !TP_JOGADOR_H
