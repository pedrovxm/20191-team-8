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

int main()
{
	ALLEGRO_DISPLAY * display;
	ALLEGRO_EVENT_QUEUE * queue;
	ALLEGRO_TIMER * timer;
	ALLEGRO_BITMAP* background = NULL;

	//music
	ALLEGRO_SAMPLE* intro = al_load_sample("intro.ogg");
	
	al_init();
	al_set_new_display_flags(ALLEGRO_FULLSCREEN);

	display = al_create_display(ScreenWidth, ScreenHeight);
	queue = al_create_event_queue();
	timer = al_create_timer(1.0 / 60);

	al_install_keyboard(); 
	al_install_mouse();
	al_install_audio();
	al_init_acodec_addon();
	al_register_event_source(queue, al_get_keyboard_event_source());
	al_register_event_source(queue, al_get_display_event_source(display));
	al_register_event_source(queue, al_get_timer_event_source(timer));

	al_init_image_addon();
	background = al_load_bitmap("menu1.png");
	assert(background != NULL);

	al_set_window_title(display, "BANG!");

	bool running = true;
	bool menu = true;
	bool players_menu = false;

	float x = 0;
	int aux = 0;
	int players = 4;
	int width = al_get_display_width(display);

	al_start_timer(timer);

	while (running) 
	{
		ALLEGRO_EVENT event;

		al_wait_for_event(queue, &event);

		if (event.type == ALLEGRO_EVENT_KEY_UP && menu == true)
		{
			if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
				running = false;
			else if (event.keyboard.keycode == ALLEGRO_KEY_DOWN && menu == true)
			{
				background = al_load_bitmap("menu2.png");
				aux = 1;
			}
			else if (event.keyboard.keycode == ALLEGRO_KEY_UP && menu == true)
			{
				background = al_load_bitmap("menu1.png");
				aux = 0;
			}
			else if (aux == 1)
			{
				if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
				{
					running = false;
				}
			}
			else if (aux == 0)
			{
				if (event.keyboard.keycode == ALLEGRO_KEY_ENTER)
				{
					menu = false;
					players_menu = true;
					background = al_load_bitmap("players4.png");
				}
			}
		}

		if (event.type == ALLEGRO_EVENT_KEY_UP && players_menu == true)
		{
			switch (players)
			{
				case 4:
					if (event.keyboard.keycode == ALLEGRO_KEY_UP)
					{
						background = al_load_bitmap("players5.png");
						players = 5;
					}
					if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
					{
						background = al_load_bitmap("menu1.png");
						players_menu = false;
						menu = true;
					}
					break;
				case 5:
					if (event.keyboard.keycode == ALLEGRO_KEY_UP)
					{
						background = al_load_bitmap("players6.png");
						players = 6;
					}
					if (event.keyboard.keycode == ALLEGRO_KEY_DOWN)
					{
						background = al_load_bitmap("players4.png");
						players = 4;
					}
					if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
					{
						background = al_load_bitmap("menu1.png");
						players_menu = false;
						menu = true;
					}
					break;
				case 6:
					if (event.keyboard.keycode == ALLEGRO_KEY_UP)
					{
						background = al_load_bitmap("players7.png");
						players = 7;
					}
					if (event.keyboard.keycode == ALLEGRO_KEY_DOWN)
					{
						background = al_load_bitmap("players5.png");
						players = 5;
					}
					if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
					{
						background = al_load_bitmap("menu1.png");
						players_menu = false;
						menu = true;
					}
					break;
				case 7:
					if (event.keyboard.keycode == ALLEGRO_KEY_DOWN)
					{
						background = al_load_bitmap("players6.png");
						players = 6;
					}
					if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
					{
						background = al_load_bitmap("menu1.png");
						players_menu = false;
						menu = true;
					}
					break;
			}
		}




		if(event.type == ALLEGRO_EVENT_TIMER)
		{
			al_clear_to_color(al_map_rgba_f(1, 1, 1, 1));
			al_draw_bitmap(background, 0, 0, 0);
			al_flip_display();
		}


		if (x > width)
			x = al_get_bitmap_width(background);
	}

	al_destroy_display(display);
	al_uninstall_keyboard();
	al_uninstall_mouse();  
	al_uninstall_audio();
	al_destroy_timer(timer);
	al_destroy_bitmap(background);

	return 0;
}