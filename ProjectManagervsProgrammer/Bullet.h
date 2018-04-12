#pragma once
#include "stdafx.h"
class Bullet
{
protected:
	float speed;
	ALLEGRO_BITMAP *style;
	bool dead;
	float speed_attac;
	float pos_x;
	float pos_y;
public:
	Bullet();
	~Bullet();
	virtual void display() = 0;
	virtual void setStyle(ALLEGRO_BITMAP*);
	virtual float getSpeed();
	virtual bool getDead();
	virtual ALLEGRO_BITMAP *getStyle();
	virtual void setDead(bool);
	virtual void setPosX(float);
	virtual void setPosY(float);
	virtual float getPosX();
	virtual float getPosY();
};

