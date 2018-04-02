#pragma once
#include "stdafx.h"

class ProjectManager
{
protected:
	string nama;
	float Speed_attack;
	float Attack_time;
	float Armor;
	ALLEGRO_BITMAP *style;
	float Hp;
	bool Dead;
	float cor_x;
	float cor_y;
	int show;
public:
	ProjectManager();
	~ProjectManager();
	virtual void Attack() = 0;
	virtual string set_Style(string) = 0;
	virtual void getHit(float);
	virtual void getHit(float, float);
	virtual string get_Name() = 0;
	virtual float get_Speed() = 0;
	virtual bool getDead() = 0;
	virtual void set_Hp(float) = 0;
	virtual void isDead(bool) = 0;
	virtual ALLEGRO_BITMAP *get_Style() = 0;
	virtual void set_Cor_x(float) = 0;
	virtual void set_Cor_y(float) = 0;
	virtual void display();
	virtual void set_show(int);
	virtual int get_show();
	virtual float get_Cor_x();
	virtual float get_Cor_y();
};

