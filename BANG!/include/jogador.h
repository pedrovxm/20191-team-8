#ifndef TP_JOGADOR_H
#define TP_JOGADOR_H

#include <vector>
#include "carta.h"
#include "papel.h"
#include "personagem.h"

class Jogador{
    private:
        int _id;
        int _life;
        int _range;
        Papel _role;
        Personagem _persona;
        vector<Carta> _hand;
    public:
        Jogador(Papel role, Personagem persona, vector<Carta> hand, int id);
        ~Jogador();
        void set_id(int id);
        void set_life(int life);
        void set_range(int range);
        void set_hand(std::vector<carta> hand);
        int get_id();
        int get_life();
        int get_role();
        int get_range();
        Papel get_papel();
        Personagem get_persona();
        std::vector<Carta> get_hand();
        void heal();
        void sufer_damage();
        void add_carta(Carta carta);
};
#endif
