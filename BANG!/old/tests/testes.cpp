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

TEST_CASE("01 - Testando construção de classes") {
  CHECK_NOTHROW(RoseDoolan(4, "image_path"));
  CHECK_NOTHROW(PedroRamirez(3, "image_path"));
  CHECK_NOTHROW(BartCassidy(5, "image_path"));
  CHECK_NOTHROW(WillyKid(4, "image_path"));
  CHECK_NOTHROW(ElGringo(3, "image_path"));
  CHECK_NOTHROW(BlackJack(2, "image_path"));
  CHECK_NOTHROW(PaulRegret(4, "image_path"));
  CHECK_NOTHROW(SuzyLafayette(3, "image_path"));
}

// TEST_CASE("02 - Acessando métodos das classes base") {
//     Triangulo t("azul", 6, 7, 8);
//     CHECK((abs(t.get_area()-20.3331625676))<0.0001);
//     CHECK(t.get_perimetro() == 21);
//
//     Quadrado q("verde", 4);
//     CHECK(q.get_area() == 16);
//     CHECK(q.get_perimetro() == 16);
//
//     Cubo c("roxo", 4);
//     CHECK(c.get_volume() == 64);
//
//     Esfera e("amarelo", 3);
//     CHECK(abs(e.get_volume()-113.097)<0.01);
//
//     Circulo cr("rosa", 2);
//     CHECK(abs(cr.get_area()-12.5664)<0.001);
//     CHECK(abs(cr.get_perimetro()-12.5664)<0.001);
//
// }
