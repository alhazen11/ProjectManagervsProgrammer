#pragma once
#include "stdafx.h"
#include "Programmer.h"
#include "ProjectManager.h"
#include "Bullet.h"
#include "P_Keyboard.h"
#include "P_Laptop.h"
#include "P_Mouse.h"
#include "P_Rocket.h"
#include "PM_Buku.h"
#include "PM_Kertas.h"
#include "PM_Komputer.h"
#include "PM_Pulpen.h"
#include "Player.h"

class GameField
{
	private:
		vector<ProjectManager*> slot_card;
		vector<Programmer*> slot_p_line1;
		vector<Programmer*> slot_p_line2;
		vector<Bullet*> slot_bullet_pm_line1;
		vector<Bullet*> slot_bullet_pm_line2;
		ALLEGRO_EVENT_QUEUE *queue;
		ALLEGRO_EVENT ev;
		Player *Players;
		int Score;
		int Level;
		int i[13];
		int Times;
		float mouse_y;
		float mouse_x;
		bool win=false;
		bool gameover = false;
		bool drag = false;
		ProjectManager* mouse_s;
		PM_Buku* buku;
		PM_Kertas* kertas;
		PM_Komputer* komputer;
		PM_Pulpen* pulpen;
		P_Rocket* rocket;
		P_Mouse* mouse;
		P_Laptop* laptop;
		P_Keyboard* keyboard;
		vector<ProjectManager*> slot_pm_line1;
		vector<ProjectManager*> slot_pm_line2;

public:
	GameField(Player *);
	~GameField();
	void Mouse_drag();
	int get_Score();
	void Proses();
	void Display();
	int get_Level();
	int get_Times();
	void set_Times(int);
	void Lose();
	void Finish();
	void Init(int);
	void set_ev(ALLEGRO_EVENT);
	void set_queue(ALLEGRO_EVENT_QUEUE *);
};

