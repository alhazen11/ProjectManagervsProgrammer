#pragma once
#include "Programmer.h"
class P_Laptop :
	public Programmer
{
public:
	P_Laptop(int);
	~P_Laptop();
	//void strike(); no idea so far.
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
	bool getBool();
	string getName();
	float getSpeed();
	ALGIF_ANIMATION *getStyle();
	bool cekDead();
	float getPosX();
	float getPosY();
	int getShow();
};

