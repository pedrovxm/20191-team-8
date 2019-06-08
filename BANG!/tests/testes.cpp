#include "doctest.h"
#include "personagem.h"
#include "rose_doolan.h"
#include "pedro_ramirez.h"
#include "bart_cassidy.h"
#include "willy_kid.h"
#include "el_gringo.h"
#include "black_jack.h"
#include "paul_regret.h"
#include "suzy_lafayette.h"
#include <string>
#include <math.h>

/////////////////
// Personagens //
/////////////////

TEST_CASE("01.01 - Testando construção de classes para personagens") {
  CHECK_NOTHROW(RoseDoolan(4, "image_path"));
  CHECK_NOTHROW(PedroRamirez(3, "image_path"));
  CHECK_NOTHROW(BartCassidy(5, "image_path"));
  CHECK_NOTHROW(WillyKid(4, "image_path"));
  CHECK_NOTHROW(ElGringo(3, "image_path"));
  CHECK_NOTHROW(BlackJack(2, "image_path"));
  CHECK_NOTHROW(PaulRegret(4, "image_path"));
  CHECK_NOTHROW(SuzyLafayette(3, "image_path"));
}

TEST_CASE("01.02 - Acessando métodos das classes de personagens") {
  RoseDoolan rose_doolan(4, "image_path");
  CHECK(rose_doolan.get_vida() == 4);
  CHECK(rose_doolan.get_imagem() == "image_path");
  CHECK(rose_doolan.get_nome() == "Rose Doolan");
  CHECK(rose_doolan.get_descricao() == "Texto descritivo do personagem");
  // CHECK(); // Efeito

  PedroRamirez pedro_ramirez(4, "image_path");
  CHECK(pedro_ramirez.get_vida() == 4);
  CHECK(pedro_ramirez.get_imagem() == "image_path");
  CHECK(pedro_ramirez.get_nome() == "Pedro Ramirez");
  CHECK(pedro_ramirez.get_descricao() == "Texto descritivo do personagem");
  // CHECK(); // Efeito

  BartCassidy bart_cassidy(4, "image_path");
  CHECK(bart_cassidy.get_vida() == 4);
  CHECK(bart_cassidy.get_imagem() == "image_path");
  CHECK(bart_cassidy.get_nome() == "Bart Cassidy");
  CHECK(bart_cassidy.get_descricao() == "Texto descritivo do personagem");
  // CHECK(); // Efeito

  WillyKid willy_kid(4, "image_path");
  CHECK(willy_kid.get_vida() == 4);
  CHECK(willy_kid.get_imagem() == "image_path");
  CHECK(willy_kid.get_nome() == "Willy Kid");
  CHECK(willy_kid.get_descricao() == "Texto descritivo do personagem");
  // CHECK(); // Efeito

  ElGringo el_gringo(4, "image_path");
  CHECK(el_gringo.get_vida() == 4);
  CHECK(el_gringo.get_imagem() == "image_path");
  CHECK(el_gringo.get_nome() == "El Gringo");
  CHECK(el_gringo.get_descricao() == "Texto descritivo do personagem");
  // CHECK(); // Efeito

  BlackJack black_jack(4, "image_path");
  CHECK(black_jack.get_vida() == 4);
  CHECK(black_jack.get_imagem() == "image_path");
  CHECK(black_jack.get_nome() == "Black Jack");
  CHECK(black_jack.get_descricao() == "Texto descritivo do personagem");
  // CHECK(); // Efeito

  SuzyLafayette suzy_lafayette(4, "image_path");
  CHECK(suzy_lafayette.get_vida() == 4);
  CHECK(suzy_lafayette.get_imagem() == "image_path");
  CHECK(suzy_lafayette.get_nome() == "Suzy Lafayette");
  CHECK(suzy_lafayette.get_descricao() == "Texto descritivo do personagem");
  // CHECK(); // Efeito
}
