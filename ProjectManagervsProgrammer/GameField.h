#pragma once
#include "stdafx.h"
#include "Programmer.h"
#include "ProjectManager.h"

class GameField
{
	private:
		vector<ProjectManager*> slot_card;
		vector<Programmer*> slot_p;
		int Score;
		int Level;
		float Time;
		bool win=false;
		bool gameover = false;
		ProjectManager* mouse;
		vector<ProjectManager*> PM_Slot;
public:
	GameField();
	~GameField();
	void IN_P();
	void IN_PM();
	void mouse_drag();
	int get_Score();
	void Proses();
	ProjectManager* get_Card();
	int get_Level();
	void Lose();
	void Finish();
	void Init();
	void Intro();
};

