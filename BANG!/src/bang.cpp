#include "cartas.h"
#include "bang.h"
#include <string>
#include <iostream>
//#include <vector>
//#include "esquiva.h"

Bang::Bang(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};

//NESSA FUNÇÃO O JOGADOR QUE TIVER O BANG
//ESCOLHERA DENTRE OS SEUS INIMIGOS VIVOS
//AO SEU ALCANCE UM PARA DAR UM BANG!
//ISTO É, HEALTH_POINTS--, SE O ESCOLHIDO NÃO
//TIVER ESQUIVA.
//PARA ISSO, IREMOS REPRESENTAR OS INIMIGOS
//POR UM VECTOR (?) COM OS PLAYERS A DISTÂNCIA
//ALCANÇÁVEL E O JOGADOR ESCOLHERÁ O SEU ALVO
//DENTRE ELES.
//Bang::get_effect(){
  //vector<jogador> reachable_enemies = _holder->alive_enemies;
  //for (int i = 0; i < reachable_enemies.size(); i++)
    //cout << i  << " " << reachable_enemies[i]->id << end;
  //IRA MOSTRAR AO JOGADOR TODOS OS INIMIGOS AO ALCANCE DELE
  //int index VARIAVEL QUE IRA RECEBER O INDEX DO PLAYER ESCOLHIDO
  //cin >> index;
  //int enemy_esquiva = 100; //valor simbolico :()
  //bool dodged = false;
  //enemy_esquiva = reachable_enemies[index]->check_cards("ESQUIVA!"); //checa as cartas na mão do jogador, retorna a posicao da carta na mao do jogador se ele tiver uma esquiva
  //if (enemy_esquiva != 100)                                          //ESTAMOS FORA DA CLASSE ESQUIVA
    //dodge = reachable_enemies[index]->cards[enemy_esquiva]->check_esquiva(); //retorna valor booleano se o jogador esquivou ou não
  //if (dodge){
    //cout << "O jogador ESQUIVOU!" << endl;
  //
  //else{
    //cout << "BANG!" << endl;
    //cout << O jogador inimigo perdeu um ponto de vida! << endl;
    //enemy_esquiva->healh_points-=1;
//}
//}

// bool Bang::check_bang(){
//   bool tem_bang = false;
//   tem_bang = _holder->check_cards(this->name);
//   if(tem_bang)
//     return true;
//   else
//     return false;
// } FUNCAO QUE SERÁ USADA NO DUELO
//   E PODE SER UMA ALTERNATIVA PRA METRALHADORA
//   IRÁ CHECAR SE O JOGADOR TEM UM BANG! NA MÃO,
//   PODEMOS CRIAR ESSA FUNÇÃO NA CLASSE JOGADOR TAMBÉM,
//   PARA NÃO TER UM CHECK_BANG E UM CHECK_ESQUIVA, PODERIA HAVER
//   APENAS O CHECK_CARTA ? (PERGUNTA DO AQUINO DO SÁBADO 2/06 23:04 PARA QUEM FOR LER ISSO DURANTE A SEMANA)
//   CHECK_CARDS(STD::STRING NOME_CARTA) É UMA OPÇÃO MAIS EFICIENTE PARA CHECAR SE UM JOGADOR TEM UMA CARTA ESPECÍFICA
//   PARA UMA SITUAÇÃO, ESSA QUE DEVE SER IMPLEMENTADA NA CLASSE JOGADOR, ACIMA EU FIZ UMA EXPLICAÇÃO PARA: BANG! vs ESQUIVA!
//   QUE PODE SER PASSADA FACILMENTE PARA ESSE SISTEMA, BASTA IMPLEMENTAR A FUNÇÃO NA CLASSE JOGADOR E ARRUMAR OS INCLUDES.
//   RESUMINDO: CHECK_BANG e CHECK_ESQUIVA PODEM SER SUBSTITUIDAS POR CHECK_CARDS NA CLASSE JOGADOR, ESSA FUNÇÃO IRÁ RECEBER O NOME DA CARTA CUJO QUEREMOS SABER SE O JOGADOR POSSUI NA MÃO (E SE DESEJA USAR, NO CASO DA ESQUIVA).
