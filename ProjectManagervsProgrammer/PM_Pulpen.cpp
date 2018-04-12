#include "PM_Pulpen.h"



PM_Pulpen::PM_Pulpen()
{
	PM_Pulpen::Armor = 20;
	PM_Pulpen::Attack_time = 150;
	PM_Pulpen::Speed_attack = 0.3;
	PM_Pulpen::Hp = 400;
	PM_Pulpen::pulpen_g = algif_load_animation("img/pm_walk.gif");
	PM_Pulpen::style = algif_load_animation("img/pm_walk.gif");
}


PM_Pulpen::~PM_Pulpen()
{

}

void PM_Pulpen::Attack()
{
}

void PM_Pulpen::set_Style(ALGIF_ANIMATION *style)
{
	PM_Pulpen::style = style;
}

void PM_Pulpen::getHit(float firePower)
{
	float armourz = PM_Pulpen::Armor;
	float damage = firePower / (armourz + 1);
	if (PM_Pulpen::Hp > 0) {
		PM_Pulpen::Hp -= damage;
		if (PM_Pulpen::Hp <= 0) {
			PM_Pulpen::Hp = 0;
		}
	}
	else {
		PM_Pulpen::Hp = 0;
	}
}

void PM_Pulpen::getHit(float firePower, float armour)
{
	float armourReduced = PM_Pulpen::Armor - armour;
	if (armourReduced > 1.0) {
		armourReduced = 1.0;
	}
	float damage = firePower / (PM_Pulpen::Armor - armourReduced + 1.0);
	if (PM_Pulpen::Hp > 0.0) {
		PM_Pulpen::Hp -= damage;
		if (PM_Pulpen::Hp <= 0.0) {
			PM_Pulpen::Hp = 0.0;
		}
	}
	else {
		PM_Pulpen::Hp = 0.0;
	}
}

string PM_Pulpen::get_Name()
{
	return PM_Pulpen::nama;
}

float PM_Pulpen::get_Speed()
{
	return PM_Pulpen::Speed_attack;
}

bool PM_Pulpen::getDead()
{
	return false;
}

void PM_Pulpen::set_Hp(float hp)
{
	this->Hp = hp;
}

void PM_Pulpen::isDead(bool dead)
{
	this->Dead = dead;
}

ALGIF_ANIMATION * PM_Pulpen::get_Style()
{
	return PM_Pulpen::style;
}

void PM_Pulpen::display()
{
	al_draw_bitmap(algif_get_bitmap(PM_Pulpen::style, al_get_time()), PM_Pulpen::cor_x-32, PM_Pulpen::cor_y - 28, 0);
}

void PM_Pulpen::set_show(int show)
{
	PM_Pulpen::show = show;
}

int PM_Pulpen::get_show()
{
	return PM_Pulpen::show;
}

void PM_Pulpen::set_Cor_x(float x)
{
	this->cor_x = x;
}

void PM_Pulpen::set_Cor_y(float y)
{
	this->cor_y = y;
}

float PM_Pulpen::get_Cor_x()
{
	return PM_Pulpen::cor_x;
}

float PM_Pulpen::get_Cor_y()
{
	return PM_Pulpen::cor_y;
}