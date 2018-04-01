#pragma once
#include "stdafx.h"
class Player
{
private:
	string Nama;
	int Score;
	int Level;
public:
	Player();
	~Player();
	void set_Score(int);
	void set_Level();
	string get_Name();
	int get_Score();
	int get_Level();
	void set_Name();
};

