#ifndef TP_PERSONAGEM_H
#define TP_PERSONAGEM_H

#include <string>
#include <iostream>

class Personagem {
  public:
    Personagem(int vida, std::string imagem, std::string nome, std::string descricao);
    ~Personagem();
    virtual void efeito();
  protected:
    int Personagem::get_vida();
    std::string Personagem::get_imagem();
    std::string Personagem::get_nome();
    std::string Personagem::get_descricao();
    void Personagem::set_vida(int vida);
    void Personagem::set_imagem(std::string imagem);
    void Personagem::set_nome(std::string nome);
    void Personagem::set_descricao(std::string descricao);
  private:
    int vida;
    std::string imagem;
    std::string nome;
    std::string descricao;
};
#endif
