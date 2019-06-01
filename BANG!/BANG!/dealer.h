#ifndef TP_DEALER_H
#define TP_DEALER_H
#include <cstddef>
//Allegro libs//
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_font.h>
class Dealer {
	private:
		int aux = 0;
		int width = 0;
		int players = 4;

		bool running = true;
		bool menu = true;
		bool players_menu = false;
		bool game_cards = false;
		bool game = false;

		//display
		ALLEGRO_DISPLAY* display;
		ALLEGRO_EVENT_QUEUE* queue;
		ALLEGRO_TIMER* timer;

		//BITMAPS//
		ALLEGRO_BITMAP* background = NULL;
		//personagens//
		ALLEGRO_BITMAP* personagem_1 = NULL;
		ALLEGRO_BITMAP* personagem_2 = NULL;
		ALLEGRO_BITMAP* personagem_3 = NULL;
		ALLEGRO_BITMAP* personagem_4 = NULL;
		ALLEGRO_BITMAP* personagem_5 = NULL;
		ALLEGRO_BITMAP* personagem_6 = NULL;
		ALLEGRO_BITMAP* personagem_7 = NULL;
		//cartas//
		ALLEGRO_BITMAP* carta_1 = NULL;
		ALLEGRO_BITMAP* carta_2 = NULL;
		ALLEGRO_BITMAP* carta_3 = NULL;
		ALLEGRO_BITMAP* carta_4 = NULL;
		ALLEGRO_BITMAP* carta_5 = NULL;
		ALLEGRO_BITMAP* carta_6 = NULL;
		ALLEGRO_BITMAP* carta_7 = NULL;
		ALLEGRO_BITMAP* carta_8 = NULL;
		ALLEGRO_BITMAP* carta_9 = NULL;
		ALLEGRO_BITMAP* carta_10 = NULL;
		//equips//
		ALLEGRO_BITMAP* equip_1 = NULL;
		ALLEGRO_BITMAP* equip_2 = NULL;
		ALLEGRO_BITMAP* equip_3 = NULL;
		//vida//
		ALLEGRO_BITMAP* vida = NULL;
		//bang!//
		ALLEGRO_BITMAP* bang_press = NULL;
		//botão turnos//
		ALLEGRO_BITMAP* turnos = NULL;
		//prisao//
		ALLEGRO_BITMAP* prisao = NULL;
		//dinamite//
		ALLEGRO_BITMAP* dinamite = NULL;
		//mira//
		ALLEGRO_BITMAP* mira = NULL;
		//mustang//
		ALLEGRO_BITMAP* mustang = NULL;

		//music
		ALLEGRO_SAMPLE* intro = al_load_sample("intro.ogg");

	public:
		Dealer();
		~Dealer();
		void start();
		void end();
		void initial_screen_config();
		void start_menu();
};
#endif // !DEALER_TP_H



