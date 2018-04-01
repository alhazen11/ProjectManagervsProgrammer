#pragma once
#include "stdafx.h"

class ProjectManager
{
protected:
	string nama;
	float Speed_attack;
	float Attack_time;
	float Armor;
	string style;
	float Hp;
	bool Dead;
	float cor_x;
	float cor_y;
public:
	ProjectManager();
	~ProjectManager();
	virtual void Attack()=0;
	virtual void set_Style(string) = 0;
	virtual void get_Name();
	virtual void get_Speed();
	virtual void get_Style();
	virtual void cek_Dead() = 0;
	virtual void set_Hp();
	virtual void set_Dead(bool);
	virtual void set_Cor(float, float);
};

