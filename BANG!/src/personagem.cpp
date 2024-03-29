#include "personagem.h"

// GETTERS
int Personagem::get_vida() {
  return this->vida;
}

std::string Personagem::get_imagem() {
  return this->imagem;
}

std::string Personagem::get_nome() {
  return this->nome;
}

std::string Personagem::get_descricao() {
  return this->descricao;
}

// SETTERS
void Personagem::set_vida(int vida) {
  this->vida = vida;
}

void Personagem::set_imagem(std::string imagem) {
  this->imagem = imagem;
}

void Personagem::set_nome(std::string nome) {
  this->nome = nome;
}

void Personagem::set_descricao(std::string descricao) {
  this->descricao = descricao;
}
