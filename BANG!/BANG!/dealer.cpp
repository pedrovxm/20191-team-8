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

Dealer::Dealer(){
}


Dealer::~Dealer(){
}
void Dealer::initial_screen_config() {
	al_init();
	al_set_new_display_flags(ALLEGRO_FULLSCREEN);
	this->display = al_create_display(ScreenWidth, ScreenHeight);
	this->queue = al_create_event_queue();
	this->timer = al_create_timer(1.0 / 60);
	al_install_keyboard();
	al_install_mouse();
	al_install_audio();
	al_init_acodec_addon();
	al_register_event_source(this->queue, al_get_keyboard_event_source());
	al_register_event_source(this->queue, al_get_display_event_source(display));
	al_register_event_source(this->queue, al_get_timer_event_source(this->timer));
	al_init_image_addon();
	this->background = al_load_bitmap("menu1.png");
	assert(this->background != NULL);
	al_set_window_title(this->display, "BANG!");
	this->width = al_get_display_width(this->display);
	al_start_timer(this->timer);
}
void Dealer::start_menu() {
	ALLEGRO_EVENT event;
	al_wait_for_event(this->queue, &event);
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
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
				this->running = false;
			}
		}
		else if (this->aux == 0) {
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
				this->menu = false;
				this->players_menu = true;
				this->background = al_load_bitmap("players4.png");
			}
		}
	}
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
			break;
		}
	}
	if (event.type == ALLEGRO_EVENT_TIMER) {
		al_clear_to_color(al_map_rgba_f(1, 1, 1, 1));
		al_draw_bitmap(this->background, 0, 0, 0);
		al_flip_display();
	}
	if (this->x > width) {
		this->x = al_get_bitmap_width(this->background);
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
}