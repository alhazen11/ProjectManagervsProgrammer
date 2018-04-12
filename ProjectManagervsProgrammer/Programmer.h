#pragma once
#include "stdafx.h"

class Programmer
{
protected:
	string nama;
	float speed;
	float attackDamage;
	float armor;
	ALGIF_ANIMATION *style;
	float hp;
	bool dead;
	float speed_attac;
	float speed_walk;
	float pos_x;
	float pos_y;
	int show;
public:
	Programmer();
	~Programmer();
	virtual void walk() = 0;
	virtual void attack() = 0;
	virtual void getHit(float) = 0;
	virtual void setStyle(ALGIF_ANIMATION*);
	virtual string getName();
	virtual float getSpeed();
	virtual bool getDead();
	virtual ALGIF_ANIMATION *getStyle();
	virtual bool cekDead();
	virtual void setHp(float);
	virtual void setDead(bool);
	virtual void setPosX(float);
	virtual void setPosY(float);
	virtual void setShow(int);
	virtual int getShow();
	virtual float getPosX();
	virtual float getPosY();
	virtual void display()=0;
};

