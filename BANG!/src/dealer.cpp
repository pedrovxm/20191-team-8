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
	al_register_event_source(this->queue, al_get_mouse_event_source());
	al_register_event_source(this->queue, al_get_display_event_source(display));
	al_register_event_source(this->queue, al_get_timer_event_source(this->timer));
	al_init_image_addon();

	//BITMAPS//

	//background//
	this->background = al_load_bitmap("../assets/img/menu1.png");
	//personagens//
	this->personagem_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->personagem_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->personagem_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->personagem_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->personagem_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->personagem_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->personagem_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
	//cartas//
	this->carta_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->carta_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->carta_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->carta_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->carta_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->carta_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->carta_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->carta_8 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->carta_9 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->carta_10 = al_load_bitmap("../assets/img/bitmap_initial.png");
	//equips//
	this->equip_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->equip_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->equip_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
	//vida//
	this->vida = al_load_bitmap("../assets/img/bitmap_initial.png");
	//bang!//
	this->bang_press = al_load_bitmap("../assets/img/bitmap_initial.png");
	//passa turnos//
	this->turnos = al_load_bitmap("../assets/img/bitmap_initial.png");
	//prisao//
	this->prisao = al_load_bitmap("../assets/img/bitmap_initial.png");
	//dinamite//
	this->dinamite = al_load_bitmap("../assets/img/bitmap_initial.png");
	//mira//
	this->mira = al_load_bitmap("../assets/img/bitmap_initial.png");
	//mustang//
	this->mustang = al_load_bitmap("../assets/img/bitmap_initial.png");
	//pause//
	this->pause = al_load_bitmap("../assets/img/bitmap_initial.png");
	//frames//
	this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
	this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");



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
			this->background = al_load_bitmap("../assets/img/menu2.png");
			this->aux = 1;
		}
		else if (event.keyboard.keycode == ALLEGRO_KEY_UP && this->menu == true) {
			this->background = al_load_bitmap("../assets/img/menu1.png");
			this->aux = 0;
		}
		else if (this->aux == 1) {
			if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_SPACE) {
				this->running = false;
			}
		}
		else if (this->aux == 0) {
			if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_SPACE) {
				this->menu = false;
				this->players_menu = true;
				this->background = al_load_bitmap("../assets/img/players4.png");
			}
		}

	}

	//ESCOLHA DO NUMERO DE JOGADORES//
	if (event.type == ALLEGRO_EVENT_KEY_UP && this->players_menu == true) {
		switch (this->players) {
		case 4:
			if (event.keyboard.keycode == ALLEGRO_KEY_UP) {
				this->background = al_load_bitmap("../assets/img/players5.png");
				this->players = 5;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
				this->background = al_load_bitmap("../assets/img/menu1.png");
				this->players_menu = false;
				this->menu = true;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
			{
				players_menu = false;
				game_cards = true;
				this->background = al_load_bitmap("../assets/img/tabuleiro.png");
			}
			break;
		case 5:
			if (event.keyboard.keycode == ALLEGRO_KEY_UP) {
				this->background = al_load_bitmap("../assets/img/players6.png");
				this->players = 6;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_DOWN) {
				this->background = al_load_bitmap("../assets/img/players4.png");
				this->players = 4;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
				this->background = al_load_bitmap("../assets/img/menu1.png");
				this->players_menu = false;
				this->menu = true;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
			{
				players_menu = false;
				game_cards = true;
				this->background = al_load_bitmap("../assets/img/tabuleiro.png");
			}
			break;
		case 6:
			if (event.keyboard.keycode == ALLEGRO_KEY_UP) {
				this->background = al_load_bitmap("../assets/img/players7.png");
				this->players = 7;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_DOWN) {
				this->background = al_load_bitmap("../assets/img/players5.png");
				this->players = 5;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
				this->background = al_load_bitmap("../assets/img/menu1.png");
				this->players_menu = false;
				this->menu = true;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
			{
				players_menu = false;
				game_cards = true;
				this->background = al_load_bitmap("../assets/img/tabuleiro.png");
			}
			break;
		case 7:
			if (event.keyboard.keycode == ALLEGRO_KEY_DOWN) {
				this->background = al_load_bitmap("../assets/img/players6.png");
				this->players = 6;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
				this->background = al_load_bitmap("../assets/img/menu1.png");
				this->players_menu = false;
				this->menu = true;
			}
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
			{
				players_menu = false;
				game_cards = true;

				this->background = al_load_bitmap("../assets/img/tabuleiro.png");
			}
			break;
		}
	}

	//TABULEIRO DO GAME//
	if (this->game_cards == true)
	{
		//personagens//
		this->personagem_1 = al_load_bitmap("../assets/img/BART_CASSIDY.png");
		this->personagem_2 = al_load_bitmap("../assets/img/BART_CASSIDY.png");
		this->personagem_3 = al_load_bitmap("../assets/img/BART_CASSIDY.png");
		this->personagem_4 = al_load_bitmap("../assets/img/BART_CASSIDY.png");
		if (players > 4)
			this->personagem_5 = al_load_bitmap("../assets/img/BART_CASSIDY.png");
		if (players > 5)
			this->personagem_6 = al_load_bitmap("../assets/img/BART_CASSIDY.png");
		if (players > 6)
			this->personagem_7 = al_load_bitmap("../assets/img/BART_CASSIDY.png");
		//cartas//
		this->carta_1 = al_load_bitmap("../assets/img/BANG!.png");
		this->carta_2 = al_load_bitmap("../assets/img/BANG!.png");
		this->carta_3 = al_load_bitmap("../assets/img/BANG!.png");
		this->carta_4 = al_load_bitmap("../assets/img/BANG!.png");
		this->carta_5 = al_load_bitmap("../assets/img/BANG!.png");
		this->carta_6 = al_load_bitmap("../assets/img/BANG!.png");
		this->carta_7 = al_load_bitmap("../assets/img/BANG!.png");
		this->carta_8 = al_load_bitmap("../assets/img/BANG!.png");
		this->carta_9 = al_load_bitmap("../assets/img/BANG!.png");
		this->carta_10 = al_load_bitmap("../assets/img/BANG!.png");
		//equips//
		this->equip_1 = al_load_bitmap("../assets/img/BANG!.png");
		this->equip_2 = al_load_bitmap("../assets/img/BANG!.png");
		this->equip_3 = al_load_bitmap("../assets/img/BANG!.png");
		//vida//
		this->vida = al_load_bitmap("../assets/img/4vidas.png");
		//bang!//
		this->bang_press = al_load_bitmap("../assets/img/bang2.png");
		//botão turnos//
		this->turnos = al_load_bitmap("../assets/img/passaturno.png");
		//prisao//
		this->prisao = al_load_bitmap("../assets/img/cadeado_02.png");
		//dinamite//
		this->dinamite = al_load_bitmap("../assets/img/dinamite_02.png");
		//mira//
		this->mira = al_load_bitmap("../assets/img/mira_02.png");
		//mustang//
		this->mustang = al_load_bitmap("../assets/img/cavalo_02.png");

		this->game_cards = false;
		game = true;
	}

	//seleção de carta a ser utilizada//

	if (event.type == ALLEGRO_EVENT_KEY_UP && game == true)
	{
		//CARTA 1
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_Q)
		{
			this->frame_q = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 1;
			player_num = 0;
		}
		//CARTA 2
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_W)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 2;
			player_num = 0;
		}
		//CARTA 3
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_E)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 3;
			player_num = 0;
		}
		//CARTA 4
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_R)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 4;
			player_num = 0;
		}
		//CARTA 5
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_T)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 5;
			player_num = 0;
		}
		//CARTA 6
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_Y)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 6;
			player_num = 0;
		}
		//CARTA 7
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_U)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 7;
			player_num = 0;
		}
		//CARTA 8
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_I)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 8;
			player_num = 0;
		}
		//CARTA 9
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_O)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 9;
			player_num = 0;
		}
		//CARTA 10
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_P)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/frame_cartas.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = false;
			card_sel = true;
			turnos_sel = false;

			card_num = 10;
			player_num = 0;
		}
		//PLAYER 1
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_1)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/frame_player.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = true;
			card_sel = false;
			turnos_sel = false;

			card_num = 0;
			player_num = 1;
		}
		//PLAYER 2
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_2)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/frame_player.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = true;
			card_sel = false;
			turnos_sel = false;

			card_num = 0;
			player_num = 2;
		}
		//PLAYER 3
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_3)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/frame_player.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = true;
			card_sel = false;
			turnos_sel = false;

			card_num = 0;
			player_num = 3;
		}
		//PLAYER 4
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_4)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/frame_player.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = true;
			card_sel = false;
			turnos_sel = false;

			card_num = 0;
			player_num = 4;
		}
		//PLAYER 5
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_5 && players > 4)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/frame_player.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = true;
			card_sel = false;
			turnos_sel = false;

			card_num = 0;
			player_num = 5;
		}
		//PLAYER 6
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_6 && players > 5)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/frame_player.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = true;
			card_sel = false;
			turnos_sel = false;

			card_num = 0;
			player_num = 6;
		}
		//PLAYER 7
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_7 && players > 6)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/frame_player.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno.png");

			player_sel = true;
			card_sel = false;
			turnos_sel = false;

			card_num = 0;
			player_num = 7;
		}
		//BOTAO TURNOS
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_SPACE)
		{
			this->frame_q = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_w = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_e = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_r = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_t = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_y = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_u = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_i = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_o = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_p = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_1 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_2 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_3 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_4 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_5 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_6 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->frame_7 = al_load_bitmap("../assets/img/bitmap_initial.png");
			this->turnos = al_load_bitmap("../assets/img/passaturno1.png");

			player_sel = false;
			card_sel = false;
			turnos_sel = true;

			card_num = 0;
			player_num = 0;
		}

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
		//bang!//
		al_draw_bitmap(this->bang_press, 900, 280, 0);
		//botão turnos//
		al_draw_bitmap(this->turnos, 1130, 290, 0);
		//prisao//
		al_draw_bitmap(this->prisao, 190, 390, 0);
		//dinamite//
		al_draw_bitmap(this->dinamite, 190, 250, 0);
		//mira//
		al_draw_bitmap(this->mira, 320, 290, 0);
		//mustang//
		al_draw_bitmap(this->mustang, 320, 397, 0);
		//frame//
		al_draw_bitmap(this->frame_q, 47, 500, 0);
		al_draw_bitmap(this->frame_w, 168, 500, 0);
		al_draw_bitmap(this->frame_e, 287, 500, 0);
		al_draw_bitmap(this->frame_r, 407, 500, 0);
		al_draw_bitmap(this->frame_t, 527, 500, 0);
		al_draw_bitmap(this->frame_y, 646, 500, 0);
		al_draw_bitmap(this->frame_u, 767, 500, 0);
		al_draw_bitmap(this->frame_i, 886, 500, 0);
		al_draw_bitmap(this->frame_o, 1005, 500, 0);
		al_draw_bitmap(this->frame_p, 1125, 500, 0);
		al_draw_bitmap(this->frame_1, 186, 64, 0);
		al_draw_bitmap(this->frame_2, 319, 64, 0);
		al_draw_bitmap(this->frame_3, 455, 64, 0);
		al_draw_bitmap(this->frame_4, 588, 64, 0);
		al_draw_bitmap(this->frame_5, 723, 64, 0);
		al_draw_bitmap(this->frame_6, 857, 64, 0);
		al_draw_bitmap(this->frame_7, 992, 64, 0);
		//pause//
		al_draw_bitmap(this->pause, 450, 0, 0);

		al_flip_display();
	}

	//pause commands//
	if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
	{
		this->pause = al_load_bitmap("../assets/img/pause0.png");
		pause_bool = true;
		game = false;
	}
	if (pause_bool == true)
	{
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_ENTER && pause_aux == 0)
		{
			this->pause = al_load_bitmap("../assets/img/bitmap_initial.png");
			game = true;
			pause_bool = false;
		}
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_RIGHT && pause_aux == 0)
		{
			this->pause = al_load_bitmap("../assets/img/pause1.png");
			pause_aux = 1;
		}
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_LEFT && pause_aux == 1)
		{
			this->pause = al_load_bitmap("../assets/img/pause0.png");
			pause_aux = 0;
		}
		if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_ENTER && pause_aux == 1)
		{
			running = false;
		}

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
	//bang!//
	al_destroy_bitmap(this->bang_press);
	//botão turnos//
	al_destroy_bitmap(this->turnos);
	//prisao//
	al_destroy_bitmap(this->prisao);
	//dinamite//
	al_destroy_bitmap(this->dinamite);
	//mira//
	al_destroy_bitmap(this->mira);
	//mustang//
	al_destroy_bitmap(this->mustang);
	//pause//
	al_destroy_bitmap(this->pause);
	//frames//
	al_destroy_bitmap(this->frame_q);
	al_destroy_bitmap(this->frame_w);
	al_destroy_bitmap(this->frame_e);
	al_destroy_bitmap(this->frame_r);
	al_destroy_bitmap(this->frame_t);
	al_destroy_bitmap(this->frame_y);
	al_destroy_bitmap(this->frame_u);
	al_destroy_bitmap(this->frame_i);
	al_destroy_bitmap(this->frame_o);
	al_destroy_bitmap(this->frame_p);
	al_destroy_bitmap(this->frame_1);
	al_destroy_bitmap(this->frame_2);
	al_destroy_bitmap(this->frame_3);
	al_destroy_bitmap(this->frame_4);
	al_destroy_bitmap(this->frame_5);
	al_destroy_bitmap(this->frame_6);
	al_destroy_bitmap(this->frame_7);

}
