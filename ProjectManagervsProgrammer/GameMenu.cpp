#include "GameMenu.h"



GameMenu::GameMenu()
{
}


GameMenu::~GameMenu()
{
}

void GameMenu::init()
{
	GameMenu::allegro_init();
	GameMenu::display = al_create_display(width, height);
	GameMenu::queue = al_create_event_queue();
	GameMenu::timer = al_create_timer(1 / FPS);
	al_init_image_addon();
	al_start_timer(GameMenu::timer);
	GameMenu::register_sources(GameMenu::queue, GameMenu::timer);
	GameMenu::gif[0] = algif_load_animation("img/pm_walk.gif");
	GameMenu::gif[1] = algif_load_animation("img/p_walk.gif");
	GameMenu::gif[2] = algif_load_animation("img/p_laptop.gif");
	GameMenu::background = al_load_bitmap("img/field.png");
	GameMenu::menus = al_load_bitmap("img/menu.png");
	GameMenu::button = al_load_bitmap("img/buttonc.png");
	GameMenu::buttonc = al_load_bitmap("img/button.png");
	GameMenu::aw[0] = al_load_bitmap("img/aw1.png");
	GameMenu::aw[1] = al_load_bitmap("img/aw2.png");
	GameMenu::aw[2] = al_load_bitmap("img/aw3.png");
	GameMenu::aw[3] = al_load_bitmap("img/aw4.png");
	GameMenu::white = al_map_rgb(240, 255, 250);
	GameMenu::black = al_map_rgb(0, 0, 0);
	GameMenu::font = al_load_font("Font/font.ttf", 30, 0);
	GameMenu::font_small = al_load_font("Font/font.ttf", 18, 0);
	GameMenu::font_logo = al_load_font("Font/font.ttf", 50, 0);
	GameMenu::dialog = al_load_bitmap("img/dialogKiri.png");
	GameMenu::dialog2 = al_load_bitmap("img/dialogKanan.png");
	GameMenu::button_dialog = al_load_bitmap("img/next.png");
	GameMenu::char_p[0] = al_load_bitmap("img/p.png");
	GameMenu::char_pm[0] = al_load_bitmap("img/pm.png");
	GameMenu::card = al_load_bitmap("img/card.png");
	GameMenu::info = al_load_bitmap("img/info.png");
	GameMenu::set = al_load_bitmap("img/set.png");

}

void GameMenu::allegro_init()
{
	al_init();
	al_init_primitives_addon();
	al_install_keyboard();
	al_install_mouse();
	al_init_font_addon();
	al_init_ttf_addon();
}

void GameMenu::register_sources(ALLEGRO_EVENT_QUEUE *queue, ALLEGRO_TIMER *timer)
{
	al_register_event_source(queue, al_get_keyboard_event_source());
	al_register_event_source(queue, al_get_timer_event_source(timer));
	al_register_event_source(queue, al_get_mouse_event_source());
	al_register_event_source(queue, al_get_display_event_source(GameMenu::display));
}

void GameMenu::play_menu()
{
	GameMenu::ev;
	if (intro[0]) {
		al_draw_bitmap(GameMenu::char_p[0], width / 2 + 200, height / 2 - 100, 0);
		al_draw_bitmap(GameMenu::char_pm[0], width / 2 - 750, height / 2 - 100, 0);
			if (intro[1]) {
				if (!intro[2]) {
					al_draw_bitmap(GameMenu::dialog2, width / 2 + 40, height / 2 - 260, 0);
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 + 70, height / 2 - 220, ALLEGRO_ALIGN_LEFT, "Programmer : ");
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 + 70, height / 2 - 190, ALLEGRO_ALIGN_LEFT, "Hey Project Manager please !! ");
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 + 70, height / 2 - 160, ALLEGRO_ALIGN_LEFT, "Give me some job !! :(");
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 + 70, height / 2 - 130, ALLEGRO_ALIGN_LEFT, "I need a money !!");
					al_draw_bitmap(GameMenu::button_dialog, width / 2 + 85, height / 2 - 80, 0);
					al_draw_text(GameMenu::font_small, GameMenu::white, width / 2 + 150, height / 2 - 65, ALLEGRO_ALIGN_CENTRE, "Next");
				}
				if (!al_is_event_queue_empty(GameMenu::queue)) {
					al_wait_for_event(GameMenu::queue, &ev);
				if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
				{
					if (ev.mouse.y >= height / 2 - 80 && ev.mouse.y < height / 2 - 40 && ev.mouse.x >= width / 2 + 85 && ev.mouse.x < width / 2 + 185)
					{
						intro[2] = true;
						intro[1] = false;
					}
				}
				}

			}
			if (intro[2]) {
				if (!intro[3]) {
					al_draw_bitmap(GameMenu::dialog, width / 2 - 460, height / 2 - 260, 0);
					al_draw_bitmap(GameMenu::button_dialog, width / 2 - 180, height / 2 - 80, 0);
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 - 430, height / 2 - 220, ALLEGRO_ALIGN_LEFT, "Project Manager : ");
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 - 430, height / 2 - 190, ALLEGRO_ALIGN_LEFT, "Because it's the end of the month,");
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 - 430, height / 2 - 160, ALLEGRO_ALIGN_LEFT, "This company dont have some job for you");
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 - 430, height / 2 - 130, ALLEGRO_ALIGN_LEFT, "I'll give it to you at the begin of the month");
					al_draw_text(GameMenu::font_small, GameMenu::white, width / 2 - 115, height / 2 - 65, ALLEGRO_ALIGN_CENTRE, "Next");
				}
				if (!al_is_event_queue_empty(GameMenu::queue)) {
					al_wait_for_event(GameMenu::queue, &ev);
					if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
					{
						if (ev.mouse.y >= height / 2 - 80 && ev.mouse.y < height / 2 - 40 && ev.mouse.x >= width / 2 - 180 && ev.mouse.x < width / 2 - 85)
						{
							intro[3] = true;
							intro[2] = false;
						}
					}
				}
			}
			if (intro[3]) {
				if (!intro[4]) {
					al_draw_bitmap(GameMenu::dialog2, width / 2 + 40, height / 2 - 260, 0);
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 + 70, height / 2 - 220, ALLEGRO_ALIGN_LEFT, "Programmer : ");
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 + 70, height / 2 - 190, ALLEGRO_ALIGN_LEFT, "Oh im so sad to hear that, ");
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 + 70, height / 2 - 160, ALLEGRO_ALIGN_LEFT, "Because it makes me unhappy");
					al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 + 70, height / 2 - 130, ALLEGRO_ALIGN_LEFT, "I'll destroy this company !!!! ");
					al_draw_bitmap(GameMenu::button_dialog, width / 2 + 85, height / 2 - 80, 0);
					al_draw_text(GameMenu::font_small, GameMenu::white, width / 2 + 150, height / 2 - 65, ALLEGRO_ALIGN_CENTRE, "Next");
				}
				if (!al_is_event_queue_empty(GameMenu::queue)) {
					al_wait_for_event(GameMenu::queue, &ev);
					if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
					{
						if (ev.mouse.y >= height / 2 - 80 && ev.mouse.y < height / 2 - 40 && ev.mouse.x >= width / 2 + 85 && ev.mouse.x < width / 2 + 185)
						{
							intro[4] = true;
							intro[3] = false;

							cout << "click";
						}
					}
				}
			}
			if (intro[4]) {
				al_draw_bitmap(GameMenu::dialog, width / 2 - 460, height / 2 - 260, 0);
				al_draw_bitmap(GameMenu::button_dialog, width / 2 - 180, height / 2 - 80, 0);
				al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 - 430, height / 2 - 220, ALLEGRO_ALIGN_LEFT, "Project Manager : ");
				al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 - 430, height / 2 - 190, ALLEGRO_ALIGN_LEFT, "Im so scared :(");
				al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 - 430, height / 2 - 160, ALLEGRO_ALIGN_LEFT, "But if you're serious");
				al_draw_text(GameMenu::font_small, GameMenu::black, width / 2 - 430, height / 2 - 130, ALLEGRO_ALIGN_LEFT, "It'll not be easy !!!");
				al_draw_text(GameMenu::font_small, GameMenu::white, width / 2 - 115, height / 2 - 65, ALLEGRO_ALIGN_CENTRE, "Let's begin");
				if (!al_is_event_queue_empty(GameMenu::queue)) {
					al_wait_for_event(GameMenu::queue, &ev);
					if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
					{
						if (ev.mouse.y >= height / 2 - 80 && ev.mouse.y < height / 2 - 40 && ev.mouse.x >= width / 2 - 180 && ev.mouse.x < width / 2 - 85)
						{
							intro[0] = false;
							begin = true;
							GameMenu::waktu = 0;
						}
					}
				}
			}

		
	}
	if (begin) {
		if (!al_is_event_queue_empty(GameMenu::queue)) {
			al_wait_for_event(GameMenu::queue, &ev);
			if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
			{
				cout << ev.mouse.x << " " << ev.mouse.y;
			}
		}
		al_draw_bitmap(GameMenu::card, 10, 10, 0);
		al_draw_bitmap(GameMenu::info, 960, 10, 0);
		al_draw_bitmap(GameMenu::set, 40, 625, 0);
		al_draw_bitmap(GameMenu::set, 140, 625, 0);
		al_draw_bitmap(GameMenu::set, 235, 625, 0);
		al_draw_bitmap(GameMenu::set, 330, 625, 0);
		al_draw_bitmap(GameMenu::set, 430, 625, 0);
		al_draw_bitmap(GameMenu::set, 520, 625, 0);
		al_draw_bitmap(GameMenu::set, 40, 588, 0);
		al_draw_bitmap(GameMenu::set, 140, 588, 0);
		al_draw_bitmap(GameMenu::set, 235, 588, 0);
		al_draw_bitmap(GameMenu::set, 330, 588, 0);
		al_draw_bitmap(GameMenu::set, 430, 588, 0);
		al_draw_bitmap(GameMenu::set, 520, 588, 0);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 25, 551, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 125, 551, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 220, 551, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 315, 551, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 415, 551, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 505, 551, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 25, 588, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 125, 588, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 220, 588, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 315, 588, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 415, 588, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), 505, 588, 1);

	}
}

void GameMenu::load_menu()
{
}

void GameMenu::setting_menu()
{
}

void GameMenu::quit_menu()
{
	al_show_native_message_box(al_get_current_display(),
		"Project Manager VS Programmer",
		"Quit Game",
		"You Quit Game!",
		NULL, ALLEGRO_MESSAGEBOX_ERROR);
	 GameMenu::stop = false;
}

void GameMenu::menu_cek()
{
	if (!background) {
		al_show_native_message_box(GameMenu::display, "Error", "Error", "Failed to load image!",
			NULL, ALLEGRO_MESSAGEBOX_ERROR);
		al_destroy_display(GameMenu::display);
	}
}

void GameMenu::menu_init()
{
	if (!begin) {

		if (GameMenu::x >= 1180) {
			GameMenu::x = -30;
		}
		if (GameMenu::x2 <= -30) {
			GameMenu::x2 = 1180;
		}
		if (GameMenu::x3 >= 1180) {
			GameMenu::x3 = -30;
		}
		if (GameMenu::x4 <= -30) {
			GameMenu::x4 = 1180;
		}
		if (GameMenu::x5 >= 1180) {
			GameMenu::x5 = -30;
		}
		GameMenu::x += 0.08;
		GameMenu::x2 -= 0.08;
		GameMenu::x3 += 0.12;
		GameMenu::x4 -= 0.12;
		GameMenu::x5 += 0.3;
	}

		if (GameMenu::change[0] == true) {
			if (GameMenu::x_w1 >= 200) {
				GameMenu::change[0] = false;
			}
			GameMenu::x_w1 += 0.11;
		}
		else {
			if (GameMenu::x_w1 <= 0) {
				GameMenu::change[0] = true;
			}
			GameMenu::x_w1 -= 0.11;
		}
		if (GameMenu::change[1] == true) {
			if (GameMenu::x_w2 <= -200) {
				GameMenu::change[1] = false;
			}
			GameMenu::x_w2 -= 0.11;
		}
		else {
			if (GameMenu::x_w2 >= 0) {
				GameMenu::change[1] = true;
			}
			GameMenu::x_w2 += 0.11;
		}
		if (GameMenu::change[2] == true) {
			if (x_w3 >= 200) {
				GameMenu::change[2] = false;
			}
			GameMenu::x_w3 += 0.11;
		}
		else {
			if (GameMenu::x_w3 <= 0) {
				GameMenu::change[2] = true;
			}
			GameMenu::x_w3 -= 0.11;
		}
		if (GameMenu::change[3] == true) {
			if (GameMenu::x_w4 <= -200) {
				GameMenu::change[3] = false;
			}
			GameMenu::x_w4 -= 0.11;
		}
		else {
			if (GameMenu::x_w4 >= 0) {
				GameMenu::change[3] = true;
			}
			GameMenu::x_w4 += 0.11;
		}
	
}

void GameMenu::menu_display()
{
	GameMenu::waktu += 1;
	al_draw_bitmap(GameMenu::background, 0, 0, 0);
	al_draw_bitmap(GameMenu::aw[0], width / 2 - 515 + x_w1, height / 2 - 280, 0);
	al_draw_bitmap(GameMenu::aw[1], width / 2 - 315 + x_w2, height / 2 - 240, 0);
	al_draw_bitmap(GameMenu::aw[2], width / 2 + 120 + x_w3, height / 2 - 220, 0);
	al_draw_bitmap(GameMenu::aw[3], width / 2 + 385 + x_w4, height / 2 - 260, 0);
	if (!begin) {
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[2], al_get_time()), x5, height / 2 + 235, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[1], al_get_time()), x, height / 2 + 245, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[0], al_get_time()), x2, height / 2 + 245, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[1], al_get_time()), x3, height / 2 + 255, 1);
		al_draw_bitmap(algif_get_bitmap(GameMenu::gif[0], al_get_time()), x4, height / 2 + 255, 1);
	}
	if (GameMenu::menu) {
		al_draw_bitmap(GameMenu::menus, width / 2 - 215, height / 2 - 250, 0);
		al_draw_bitmap(GameMenu::button, width / 2 - 180, height / 2 - 90, 0);
		al_draw_bitmap(GameMenu::button, width / 2 - 180, height / 2 - 10, 0);
		al_draw_bitmap(GameMenu::button, width / 2 - 180, height / 2 + 70, 0);
		al_draw_bitmap(GameMenu::button, width / 2 - 180, height / 2 + 150, 0);
		al_draw_text(GameMenu::font, GameMenu::white, width / 2, height / 2 - 220, ALLEGRO_ALIGN_CENTRE, "Project Manager");
		al_draw_text(GameMenu::font, GameMenu::white, width / 2, height / 2 - 180, ALLEGRO_ALIGN_CENTRE, "VS");
		al_draw_text(GameMenu::font, GameMenu::white, width / 2, height / 2 - 140, ALLEGRO_ALIGN_CENTRE, "Programmer");
		al_draw_text(GameMenu::font, GameMenu::white, width / 2, height / 2 - 74, ALLEGRO_ALIGN_CENTRE, "Start");
		al_draw_text(GameMenu::font, GameMenu::white, width / 2, height / 2 + 10, ALLEGRO_ALIGN_CENTRE, "Load");
		al_draw_text(GameMenu::font, GameMenu::white, width / 2, height / 2 + 86, ALLEGRO_ALIGN_CENTRE, "Setting");
		al_draw_text(GameMenu::font, GameMenu::white, width / 2, height / 2 + 170, ALLEGRO_ALIGN_CENTRE, "Quit");
	}
}

void GameMenu::menu_destroy()
{
	algif_destroy_animation(GameMenu::gif[0]);
	algif_destroy_animation(GameMenu::gif[1]);
}

void GameMenu::menu_event()
{
	if (GameMenu::menu) {
		GameMenu::ev;
		if (!al_is_event_queue_empty(GameMenu::queue)) {
			al_wait_for_event(GameMenu::queue, &ev);
			if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
				GameMenu::setStop();
				cout << "close";
			}
			if (ev.type == ALLEGRO_EVENT_MOUSE_AXES) {
				if (ev.mouse.y >= height / 2 - 90 && ev.mouse.y < height / 2 - 30)
				{
					al_draw_bitmap(buttonc, width / 2 - 180, height / 2 - 90, 0);
				}
				else if (ev.mouse.y >= height / 2 - 10 && ev.mouse.y < height / 2 + 50)
				{
					al_draw_bitmap(buttonc, width / 2 - 180, height / 2 - 10, 0);
				}
				else if (ev.mouse.y >= height / 2 + 70 && ev.mouse.y < height / 2 + 130)
				{
					al_draw_bitmap(buttonc, width / 2 - 180, height / 2 + 70, 0);
				}
				else if (ev.mouse.y >= height / 2 + 150 && ev.mouse.y < height / 2 + 210)
				{
					al_draw_bitmap(buttonc, width / 2 - 180, height / 2 + 150, 0);
				}
			}
			if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
			{
				if (ev.mouse.y >= height / 2 - 90 && ev.mouse.y < height / 2 - 30)
				{
					al_draw_bitmap(buttonc, width / 2 - 180, height / 2 - 90, 0);
					GameMenu::play = true;
					GameMenu::load = false;
					GameMenu::setting = false;
					GameMenu::quit = false;
					GameMenu::menu = false;
					cout << "start" << endl;
				}
				else if (ev.mouse.y >= height / 2 - 10 && ev.mouse.y < height / 2 + 50)
				{
					al_draw_bitmap(buttonc, width / 2 - 180, height / 2 - 10, 0);
					GameMenu::play = false;
					GameMenu::load = true;
					GameMenu::setting = false;
					GameMenu::quit = false;
					GameMenu::menu = false;
					cout << "load" << endl;
				}
				else if (ev.mouse.y >= height / 2 + 70 && ev.mouse.y < height / 2 + 130)
				{
					al_draw_bitmap(buttonc, width / 2 - 180, height / 2 + 70, 0);
					GameMenu::play = false;
					GameMenu::load = false;
					GameMenu::setting = true;
					GameMenu::quit = false;
					GameMenu::menu = false;
					cout << "setting" << endl;
				}
				else if (ev.mouse.y >= height / 2 + 150 && ev.mouse.y < height / 2 + 210)
				{
					al_draw_bitmap(buttonc, width / 2 - 180, height / 2 + 150, 0);
					GameMenu::play = false;
					GameMenu::load = false;
					GameMenu::setting = false;
					GameMenu::quit = true;
					cout << "quit" << endl;
				}
			}
		}
	}
}

bool GameMenu::getPlay()
{
	return GameMenu::play;
}

bool GameMenu::getLoad()
{
	return GameMenu::load;
}

bool GameMenu::getSetting()
{
	return GameMenu::setting;
}

bool GameMenu::getQuit()
{
	return GameMenu::quit;
}

bool GameMenu::getStop()
{
	return GameMenu::stop;
}

bool GameMenu::getMenu()
{
	return GameMenu::menu;
}

int GameMenu::getTime()
{
	return GameMenu::waktu;
}

void GameMenu::setStop()
{
	GameMenu::stop = false;
}

ALLEGRO_EVENT GameMenu::get_ev()
{
	return GameMenu::ev;
}

ALLEGRO_EVENT_QUEUE *GameMenu::get_queue()
{
	return GameMenu::queue;
}
