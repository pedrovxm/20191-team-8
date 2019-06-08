#include "jogador.h"
#include "xerife.h"
#include <memory>

// Construtor
Jogador::Jogador(Personagem *personagem, Papel *papel, int id){
  _id=id;
  _range=1;
  _prisao=false;
  _mustang=false;
  _tempo_prisao=0;
  _mira=false;
  _dinamite=false;
  // _vida=personagem->get_vida();
  //verifica se o jogador e xerife
  Papel *check_xerife = dynamic_cast<Xerife*> (papel);
  //caso xerife aumenta a vida em uma bala
  if(check_xerife)
    _vida++;
  _papel = papel;
  // _personagem = personagem;
  //Adiciona efeito bonus do personagem no jogador
  // _personagem->efeito(this);
}


Jogador::~Jogador(){}
void Jogador::comprar_carta(Carta *cartas){

}
void Jogador::usar_carta(Carta *carta){

}
void Jogador::set_range(int range){
  _range=range;
}
int Jogador::get_range(){
  return  _range;
}
void Jogador::prende(){
  _tempo_prisao=1;
  _prisao=true;
}
void Jogador::set_prisao(bool prisao){
  _prisao=prisao;
}
bool Jogador::get_prisao(){
  return _prisao;
}
void Jogador::set_id(int id){
  _id=id;
}
int Jogador::get_id(){
  return  _id;
}
void Jogador::dano(){
  _vida--;
}
void Jogador::set_vida(int vida){
  _vida=vida;
}
int Jogador::get_vida(){
  return  _vida;
}
void Jogador::equipa_mira(){
  _mira=true;
}
bool Jogador::get_mira(){
  return  _mira;
}
void Jogador::set_tempo_prisao(int tempo_prisao){
  _tempo_prisao=tempo_prisao;
}
bool Jogador::get_mustang(){
  return  _mustang;
}
void Jogador::equipa_mustang(){
  _mustang=true;
}
bool Jogador::get_dinamite(){
  return  _dinamite;
}
void Jogador::set_dinamite(bool dinamite){
  _dinamite=dinamite;
}
Personagem * Jogador::get_personagem(){
  return  _personagem;
}
std::vector<Carta *> Jogador::get_mao(){
  return  _mao;
}
