#include "dealer.h"

//Allegro libs//
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_font.h>

#include <iostream>

#define ScreenWidth 1280
#define ScreenHeight 720

Dealer::Dealer() {
}

Dealer::~Dealer() {
}
void Dealer::initial_screen_config() {

	al_init();
	al_set_new_display_flags(ALLEGRO_FULLSCREEN);

	this->display = al_create_display(ScreenWidth, ScreenHeight);
	this->queue = al_create_event_queue();
	this->timer = al_create_timer(1.0 / 60);

	//INSTALANDO OS COMPONENTES//
	al_install_keyboard();
	al_install_mouse();
	al_install_audio();
	al_init_acodec_addon();
	al_register_event_source(this->queue, al_get_keyboard_event_source());
	al_register_event_source(this->queue, al_get_display_event_source(display));
	al_register_event_source(this->queue, al_get_timer_event_source(this->timer));
	al_init_image_addon();

	//BITMAPS//

	//background//
	this->background = al_load_bitmap("menu1.png");
	//personagens//
	this->personagem_1 = al_load_bitmap("bitmap_initial.png");
	this->personagem_2 = al_load_bitmap("bitmap_initial.png");
	this->personagem_3 = al_load_bitmap("bitmap_initial.png");
	this->personagem_4 = al_load_bitmap("bitmap_initial.png");
	this->personagem_5 = al_load_bitmap("bitmap_initial.png");
	this->personagem_6 = al_load_bitmap("bitmap_initial.png");
	this->personagem_7 = al_load_bitmap("bitmap_initial.png");
	//cartas//
	this->carta_1 = al_load_bitmap("bitmap_initial.png");
	this->carta_2 = al_load_bitmap("bitmap_initial.png");
	this->carta_3 = al_load_bitmap("bitmap_initial.png");
	this->carta_4 = al_load_bitmap("bitmap_initial.png");
	this->carta_5 = al_load_bitmap("bitmap_initial.png");
	this->carta_6 = al_load_bitmap("bitmap_initial.png");
	this->carta_7 = al_load_bitmap("bitmap_initial.png");
	this->carta_8 = al_load_bitmap("bitmap_initial.png");
	this->carta_9 = al_load_bitmap("bitmap_initial.png");
	this->carta_10 = al_load_bitmap("bitmap_initial.png");
	//equips//
	this->equip_1 = al_load_bitmap("bitmap_initial.png");
	this->equip_2 = al_load_bitmap("bitmap_initial.png");
	this->equip_3 = al_load_bitmap("bitmap_initial.png");
	//vida//
	this->vida = al_load_bitmap("bitmap_initial.png");

	assert(this->background != NULL);
	al_set_window_title(this->display, "BANG!");
	this->width = al_get_display_width(this->display);
	al_start_timer(this->timer);
}
void Dealer::start_menu() {
	ALLEGRO_EVENT event;
	al_wait_for_event(this->queue, &event);

	//MENU INICIAL// 
	if (event.type == ALLEGRO_EVENT_KEY_UP && this->menu == true) {
		if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
			this->running = false;
		else if (event.keyboard.keycode == ALLEGRO_KEY_DOWN && this->menu == true) {
			this->background = al_load_bitmap("menu2.png");
			this->aux = 1;
		}
		else if (event.keyboard.keycode == ALLEGRO_KEY_UP && this->menu == true) {
			this->background = al_load_bitmap("menu1.png");
			this->aux = 0;
		}
		else if (this->aux == 1) {
			if (event.keyboard.keycode == ALLEGRO_KEY_SPACE) {
				this->running = false;
			}
		}
		else if (this->aux == 0) {
			if (event.keyboard.keycode == ALLEGRO_KEY_SPACE) {
				this->menu = false;
				this->players_menu = true;
				this->background = al_load_bitmap("players4.png");
			}
		}
	}

	//ESCOLHA DO NUMERO DE JOGADORES// 
	if (event.type == ALLEGRO_EVENT_KEY_UP && this->players_menu == true) {
		switch (this->players) {
		case 4:
			if (event.keyboard.keycode == ALLEGRO_KEY_UP) {
				this->background = al_load_bitmap("players5.png");
				this->players = 5;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
				this->background = al_load_bitmap("menu1.png");
				this->players_menu = false;
				this->menu = true;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
			{
				players_menu = false;
				game_cards = true;
				this->background = al_load_bitmap("tabuleiro.png");
			}
			break;
		case 5:
			if (event.keyboard.keycode == ALLEGRO_KEY_UP) {
				this->background = al_load_bitmap("players6.png");
				this->players = 6;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_DOWN) {
				this->background = al_load_bitmap("players4.png");
				this->players = 4;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
				this->background = al_load_bitmap("menu1.png");
				this->players_menu = false;
				this->menu = true;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
			{
				players_menu = false;
				game_cards = true;
				this->background = al_load_bitmap("tabuleiro.png");
			}
			break;
		case 6:
			if (event.keyboard.keycode == ALLEGRO_KEY_UP) {
				this->background = al_load_bitmap("players7.png");
				this->players = 7;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_DOWN) {
				this->background = al_load_bitmap("players5.png");
				this->players = 5;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
				this->background = al_load_bitmap("menu1.png");
				this->players_menu = false;
				this->menu = true;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
			{
				players_menu = false;
				game_cards = true;
				this->background = al_load_bitmap("tabuleiro.png");
			}
			break;
		case 7:
			if (event.keyboard.keycode == ALLEGRO_KEY_DOWN) {
				this->background = al_load_bitmap("players6.png");
				this->players = 6;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
				this->background = al_load_bitmap("menu1.png");
				this->players_menu = false;
				this->menu = true;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
			{
				players_menu = false;
				game_cards = true;
				game = true;

				this->background = al_load_bitmap("tabuleiro.png");
			}
			break;
		}
	}

	//TABULEIRO DO GAME// 
	if (this->game_cards == true)
	{
		//personagens//
		this->personagem_1 = al_load_bitmap("BART_CASSIDY.png");
		this->personagem_2 = al_load_bitmap("BART_CASSIDY.png");
		this->personagem_3 = al_load_bitmap("BART_CASSIDY.png");
		this->personagem_4 = al_load_bitmap("BART_CASSIDY.png");
		this->personagem_5 = al_load_bitmap("BART_CASSIDY.png");
		this->personagem_6 = al_load_bitmap("BART_CASSIDY.png");
		this->personagem_7 = al_load_bitmap("BART_CASSIDY.png");
		//cartas//
		this->carta_1 = al_load_bitmap("BANG!.png");
		this->carta_2 = al_load_bitmap("BANG!.png");
		this->carta_3 = al_load_bitmap("BANG!.png");
		this->carta_4 = al_load_bitmap("BANG!.png");
		this->carta_5 = al_load_bitmap("BANG!.png");
		this->carta_6 = al_load_bitmap("BANG!.png");
		this->carta_7 = al_load_bitmap("BANG!.png");
		this->carta_8 = al_load_bitmap("BANG!.png");
		this->carta_9 = al_load_bitmap("BANG!.png");
		this->carta_10 = al_load_bitmap("BANG!.png");
		//equips//
		this->equip_1 = al_load_bitmap("BANG!.png");
		this->equip_2 = al_load_bitmap("BANG!.png");
		this->equip_3 = al_load_bitmap("BANG!.png");
		//vida//
		this->vida = al_load_bitmap("4vidas.png");

		this->game_cards = false;
	}

	if (event.type == ALLEGRO_EVENT_TIMER) {
		al_clear_to_color(al_map_rgba_f(1, 1, 1, 1));

		//DRAW//

		//background//
		al_draw_bitmap(this->background, 0, 0, 0);
		//personagens//
		al_draw_bitmap(this->personagem_1, 194, 74, 0);
		al_draw_bitmap(this->personagem_2, 327, 74, 0);
		al_draw_bitmap(this->personagem_3, 463, 74, 0);
		al_draw_bitmap(this->personagem_4, 596, 74, 0);
		al_draw_bitmap(this->personagem_5, 731, 74, 0);
		al_draw_bitmap(this->personagem_6, 865, 74, 0);
		al_draw_bitmap(this->personagem_7, 1000, 74, 0);
		//cartas//
		al_draw_bitmap(this->carta_1, 56, 515, 0);
		al_draw_bitmap(this->carta_2, 177, 515, 0);
		al_draw_bitmap(this->carta_3, 296, 515, 0);
		al_draw_bitmap(this->carta_4, 416, 515, 0);
		al_draw_bitmap(this->carta_5, 536, 515, 0);
		al_draw_bitmap(this->carta_6, 655, 515, 0);
		al_draw_bitmap(this->carta_7, 776, 515, 0);
		al_draw_bitmap(this->carta_8, 895, 515, 0);
		al_draw_bitmap(this->carta_9, 1014, 515, 0);
		al_draw_bitmap(this->carta_10, 1134, 515, 0);
		//equips//
		al_draw_bitmap(this->equip_1, 467, 326, 0);
		al_draw_bitmap(this->equip_2, 593, 326, 0);
		al_draw_bitmap(this->equip_3, 718, 326, 0);
		//vida//
		al_draw_bitmap(this->vida, 460, 226, 0);

		al_flip_display();
	}
	if (event.type == ALLEGRO_EVENT_KEY_DOWN && event.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
	{
		running = false;
	}

}
void Dealer::start() {
	this->initial_screen_config();
	while (this->running) {
		this->start_menu();
	}
	this->end();
}
void Dealer::end() {
	al_destroy_display(this->display);
	al_uninstall_keyboard();
	al_uninstall_mouse();
	al_uninstall_audio();
	al_destroy_timer(this->timer);
	al_destroy_bitmap(this->background);
	//personagens//
	al_destroy_bitmap(this->personagem_1);
	al_destroy_bitmap(this->personagem_2);
	al_destroy_bitmap(this->personagem_3);
	al_destroy_bitmap(this->personagem_4);
	al_destroy_bitmap(this->personagem_5);
	al_destroy_bitmap(this->personagem_6);
	al_destroy_bitmap(this->personagem_7);
	//cartas//
	al_destroy_bitmap(this->carta_1);
	al_destroy_bitmap(this->carta_2);
	al_destroy_bitmap(this->carta_3);
	al_destroy_bitmap(this->carta_4);
	al_destroy_bitmap(this->carta_5);
	al_destroy_bitmap(this->carta_6);
	al_destroy_bitmap(this->carta_7);
	al_destroy_bitmap(this->carta_8);
	al_destroy_bitmap(this->carta_9);
	al_destroy_bitmap(this->carta_10);
	//equips//
	al_destroy_bitmap(this->equip_1);
	al_destroy_bitmap(this->equip_2);
	al_destroy_bitmap(this->equip_3);
	//vida//
	al_destroy_bitmap(this->vida);

}
