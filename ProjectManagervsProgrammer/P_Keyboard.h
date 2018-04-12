#pragma once
#include "Programmer.h"
class P_Keyboard :
	public Programmer
{
public:
	P_Keyboard(int);
	~P_Keyboard();
	void walk();
	void attack();
	void display();
	void getHit(float);
	void setStyle(ALGIF_ANIMATION*);
	void setHp(float);
	void setDead(bool);
	void setPosX(float);
	void setPosY(float);
	void setShow(int);
	string getName();
	float getSpeed();
	bool getBool();
	ALGIF_ANIMATION *getStyle();
	bool cekDead();
	float getPosX();
	float getPosY();
	int getShow();
};

