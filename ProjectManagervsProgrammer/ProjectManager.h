#pragma once
#include "stdafx.h"

class ProjectManager
{
protected:
	string nama;
	float Speed_attack;
	float Attack_time;
	float Armor;
	ALGIF_ANIMATION *style;
	float Hp;
	bool Dead;
	float cor_x;
	float cor_y;
	int show;
public:
	ProjectManager();
	~ProjectManager();
	virtual void Attack() = 0;
	virtual void set_Style(ALGIF_ANIMATION *) = 0;
	virtual void getHit(float);
	virtual void getHit(float, float);
	virtual string get_Name();
	virtual float get_Speed();
	virtual bool getDead();
	virtual void set_Hp(float);
	virtual void isDead(bool);
	virtual ALGIF_ANIMATION *get_Style() = 0;
	virtual void set_Cor_x(float) = 0;
	virtual void set_Cor_y(float) = 0;
	virtual void display()=0;
	virtual void set_show(int);
	virtual int get_show();
	virtual float get_Cor_x();
	virtual float get_Cor_y();
};

