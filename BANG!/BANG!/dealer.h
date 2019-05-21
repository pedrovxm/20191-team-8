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
		float x = 0;
		//display
		ALLEGRO_DISPLAY* display;
		ALLEGRO_EVENT_QUEUE* queue;
		ALLEGRO_TIMER* timer;
		ALLEGRO_BITMAP* background = NULL;
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



