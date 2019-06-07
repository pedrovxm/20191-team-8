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
    int get_vida();
    std::string get_imagem();
    std::string get_nome();
    std::string get_descricao();
    void set_vida(int vida);
    void set_imagem(std::string imagem);
    void set_nome(std::string nome);
    void set_descricao(std::string descricao);
  private:
    int vida;
    std::string imagem;
    std::string nome;
    std::string descricao;
};
#endif
