//
// Edited by matheusmtta on 30/05/19.
//
#ifndef TP_CARTAS_H
#define TP_CARTAS_H

#include <string>
#include <iostream>
//#include "jogador"

class Carta {
  protected:
  	std::string _type;
  	std::string _description;
    std::string _name;
    std::string _suit_name;
    std::string _suit_number;
    //jogador _holder;
  public:
     //Set a default card descriptions
     Carta(std::string type = "DEFALUT_TYPE",
     std::string description="DEFAULT_DESCRIPTION",
     std::string name="DEFAULT_NAME",
     std::string suitname="DEFAULT_SUIT_NAME",
     std::string suitnumber="DEFAULT"
    );
    //Function that will be used to get information and effects of the cards,
    //This class will work mostly as an interface of the cards in the game
  	//virtual void get_effect();
    std::string get_name();
  	std::string get_type();
  	std::string get_description();
    std::string get_suit_name();
    std::string get_suit_number();
    //void set_holder(&jogador);
    //jogador get_holder();
};


#endif //TP_CARTAS_H
