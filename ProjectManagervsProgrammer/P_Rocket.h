#pragma once
#include "Programmer.h"
class P_Rocket :
	public Programmer
{
public:
	P_Rocket(int);
	~P_Rocket();
	//void fly(); this shit too.
	void walk();
	void attack();
	void getHit(float);
	void display();
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

