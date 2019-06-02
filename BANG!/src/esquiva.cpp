#include <string>
#include <iostream>
#include "cartas.h"
#include "esquiva.h"
#include "bang.h"

Esquiva::Esquiva(std::string type, std::string description, std::string name, std::string suitname, std::string suitnumber):
  Carta(type, description, name, suitname, suitnumber) {};

//DARA AO JOGADOR COM A ESQUIVA NA MÃO
//A OPÇÃO DE DAR DODGE NO TIRO OU RECEBE-LO
//SÓ SERÁ ACIONADA EM CASO DE BANG!
// bool Esquiva::check_esquiva(){
//   bool dodge = false;
//   std::cout << "voce tem uma esquiva, deseja usa-la para se defender do BANG! ?" << std::endl;
//   std::cin >> dodge;
//   if (dodge)
//     return true;
//   else
//     return false;
// }
