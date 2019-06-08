#ifndef TP_PERSONAGEM_H
#define TP_PERSONAGEM_H
#include <string>

class Personagem {
  public:
    explicit Personagem(int vida, std::string imagem, std::string nome, std::string descricao) {
      this->vida = vida;
      this->imagem = imagem;
      this->nome = nome;
      this->descricao = descricao;
    };
    ~Personagem(){};
    virtual void efeito()=0;
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
