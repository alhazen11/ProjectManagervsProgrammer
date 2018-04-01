#pragma once
#include "Programmer.h"
class P_Mouse :
	public Programmer
{
public:
	P_Mouse();
	~P_Mouse();
	//void throwed(); this particular thing too
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

