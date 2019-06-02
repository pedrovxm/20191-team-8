//
// Created by matheusmtta on 30/05/19.
//

#include <string>
#include <iostream>
#include "cartas.h"
#include "saloon.h"

Saloon::Saloon(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};

// void Saloon::get_effect(){
//   vector<jogador> jogadores  _holder->alive_enemies;
//   for (int i = 0; i < jogadores.size(); i++)
//     if (jogadores[i]->health_points < jogadores[i]->papel->max_hp)
//       jogadores[i]->health_points+=1;
//   _holder->health_points+=1;
// } TODOS OS JOGADORES VIVOS COM PONTOS DE VIDA INFERIOR AO MÁXIMO
//IRÃO RECUPERAR 1 PONTO DE VIDA
