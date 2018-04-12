#pragma once
#include "stdafx.h"
#define width 1180
#define height 640
#define FPS 60.0
#define SPEED 14

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
	ALLEGRO_BITMAP  *button_dialog_hover;
	ALLEGRO_BITMAP  *char_p[5];
	ALLEGRO_BITMAP  *char_pm[5];
	ALLEGRO_BITMAP  *card;
	ALLEGRO_BITMAP  *info;
	ALLEGRO_BITMAP  *set;
	ALLEGRO_BITMAP  *credits;
	ALLEGRO_BITMAP  *credit_exit;
	ALLEGRO_BITMAP  *credit_exit_h;
	ALLEGRO_SAMPLE *song_menu;
	ALLEGRO_SAMPLE *song_field;
	ALLEGRO_SAMPLE_INSTANCE *song_inst;
	ALLEGRO_SAMPLE_INSTANCE *song_inst_field;


	int waktu=0;
	bool menu_button[4]= { false,false, false, false};
	bool intro_button[2] = { false,false};
	bool keysP1[5] = { false,false, false, false, false };
	bool gameover = false;
	bool menu = true;
	bool stop = true;
	bool play = false;
	bool load = false;
	bool credit = false;
	bool quit = false;
	bool begin = false;
	bool credit_ex=false;
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
	void credit_menu();
	void quit_menu();
	void menu_cek();
	void menu_init();
	void menu_display();
	void menu_destroy();
	void menu_event();
	bool getPlay();
	bool getLoad();
	bool getCredit();
	bool getQuit();
	bool getStop();
	bool getMenu();
	bool getBegin();
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

