#pragma once
#include "Programmer.h"
class P_Keyboard :
	public Programmer
{
public:
	P_Keyboard();
	~P_Keyboard();
	void walk();
	void attack();
	void getHit(float);
	void setStyle(string);
	void setHp(float);
	void setDead(bool);
	void setPosX(float);
	void setPosY(float);
	string getName();
	float getSpeed();
	string getStyle();
	bool cekDead();
	float getPosX();
	float getPosY();
};

