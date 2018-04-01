#pragma once
#include "stdafx.h"
#define width 1180
#define height 640
#define FPS 60.0
#define SPEED 6

class GameMenu
{
private:
	ALLEGRO_COLOR white;
	ALLEGRO_COLOR black;
	ALLEGRO_DISPLAY *display;
	ALLEGRO_EVENT_QUEUE *queue;
	ALLEGRO_TIMER *timer;
	ALLEGRO_BITMAP  *background = NULL;
	ALLEGRO_BITMAP  *aw[4];
	ALLEGRO_BITMAP  *menus;
	ALLEGRO_BITMAP  *button;
	ALLEGRO_BITMAP  *buttonc;
	ALLEGRO_BITMAP  *dialog;
	ALLEGRO_BITMAP  *dialog2;
	ALLEGRO_BITMAP  *button_dialog;
	ALLEGRO_BITMAP  *char_p[5];
	ALLEGRO_BITMAP  *char_pm[5];
	ALLEGRO_BITMAP  *card;
	ALLEGRO_BITMAP  *info;
	ALLEGRO_BITMAP  *set;

	int waktu=0;
	bool keysP1[5] = { false,false, false, false, false };
	bool gameover = false;
	bool menu = true;
	bool stop = true;
	bool play = false;
	bool load = false;
	bool setting = false;
	bool quit = false;
	bool begin = false;
	bool intro[5] = { true,true,false,false,false };
	float x = -30, x2 = -30, x3 = -30, x4 = -30, x5 = -30;
	bool change[4] = { true,true ,true ,true };
	float x_w1 = 0, x_w2 = 0, x_w3 = 0, x_w4 = 0;
	ALLEGRO_FONT *font;
	ALLEGRO_FONT *font_small;
	ALLEGRO_FONT *font_logo;
	ALGIF_ANIMATION *gif[3];
	ALLEGRO_EVENT ev;

public:
	GameMenu();
	~GameMenu();
	void init();
	void allegro_init();
	void register_sources(ALLEGRO_EVENT_QUEUE *, ALLEGRO_TIMER *);
	void play_menu();
	void load_menu();
	void setting_menu();
	void quit_menu();
	void menu_cek();
	void menu_init();
	void menu_display();
	void menu_destroy();
	void menu_event();
	bool getPlay();
	bool getLoad();
	bool getSetting();
	bool getQuit();
	bool getStop();
	bool getMenu();
	int getTime();
	void setStop();
	ALLEGRO_BITMAP  get_dialog();
	ALLEGRO_BITMAP  get_dialog2();
	ALLEGRO_BITMAP  get_button_dialog();
	ALLEGRO_BITMAP  get_char_p();
	ALLEGRO_BITMAP  get_char_pm();
	ALLEGRO_EVENT get_ev();
	ALLEGRO_EVENT_QUEUE *get_queue();
};

