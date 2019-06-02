#include <string>
#include <iostream>
#include "cartas.h"
#include "duelo.h"

Duelo::Duelo(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};


// void Duelo::get_effect(){
//   vector<jogador> possible_duels = _holder->alive_enemies;
//   for (int i = 0; i < alive_enemies.size(); i++)
//     cout << i << " " << alive_enemies[i] << endl;
//   int index_desafio;
//   cout << "Escolha a posicao do jogador que quer desafiar" << endl;
//   cin >> index_desafio;
//   while(_holder->check_cards("BANG!") && alive_enemies[index]->check_cards("BANG!")){
//     _holder->healh_points--;
//     alive_enemies[index]->healh_points--;
//     //até que um não tenha bang ele continuam a atirar em um ao outro
//   }
//   if (!_holder->check_cards("BANG!") && alive_enemies[index]->check_cards("BANG!"))
//     _holder->healh_points--;
//   else if (_holder->check_cards("BANG!") && !alive_enemies[index]->check_cards("BANG!"))
//     alive_enemies[index]->healh_points--;
// }
// O JOGADOR QUE UTILIZAR A CARTA Duelo
// IRA SELECIONAR UM INIMIGO VIVO PARA UM DUELO DE BANGS!
// ATÉ QUE PELO MENOS 1 DELES FIQUE SEM UM BANG! PARA UTILIZAR
// O JOGO IRÁ CONTINUAR, E A CADA LOOP AMBOS IRÃO PERDER 1 PONTO DE VIDA
// AO FINAL TEMOS QUE TIRAR HP DAQUELE QUE FICOU COM MAIS BANGS! EM MÃOS
// OU EM CASO DE EMPATE, DEIXAR A FUNÇÃO SER ENCERRADA.
// A CADA LOOP DA FUNÇÃO, DEVEMOS CHECAR A MORTE DO _HOLDER E DO alive_enemies[index]
// PARA SABERMOS SIM UM DELES MORREU DURANTE O DUELO!
