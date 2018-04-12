#include "PM_Kertas.h"



PM_Kertas::PM_Kertas()
{
	PM_Kertas::Armor = 25;
	PM_Kertas::Attack_time = 130;
	PM_Kertas::Speed_attack = 0.8;
	PM_Kertas::Hp = 450;

}


PM_Kertas::~PM_Kertas()
{
}

void PM_Kertas::Attack()
{
}

void PM_Kertas::set_Style(ALGIF_ANIMATION *style)
{
	PM_Kertas::style = style;
}

void PM_Kertas::getHit(float firePower)
{
	float armourz = PM_Kertas::Armor;
	float damage = firePower / (armourz + 1);
	if (PM_Kertas::Hp > 0) {
		PM_Kertas::Hp -= damage;
		if (PM_Kertas::Hp <= 0) {
			PM_Kertas::Hp = 0;
		}
	}
	else {
		PM_Kertas::Hp = 0;
	}
}

void PM_Kertas::getHit(float firePower, float armour)
{
	float armourReduced = PM_Kertas::Armor - armour;
	if (armourReduced > 1.0) {
		armourReduced = 1.0;
	}
	float damage = firePower / (PM_Kertas::Armor - armourReduced + 1.0);
	if (PM_Kertas::Hp > 0.0) {
		PM_Kertas::Hp -= damage;
		if (PM_Kertas::Hp <= 0.0) {
			PM_Kertas::Hp = 0.0;
		}
	}
	else {
		PM_Kertas::Hp = 0.0;
	}
}

string PM_Kertas::get_Name()
{
	return PM_Kertas::nama;
}

float PM_Kertas::get_Speed()
{
	return PM_Kertas::Speed_attack;
}

bool PM_Kertas::getDead()
{
	return false;
}

void PM_Kertas::set_Hp(float hp)
{
	this->Hp = hp;
}

void PM_Kertas::isDead(bool dead)
{
	this->Dead = dead;
}

ALGIF_ANIMATION * PM_Kertas::get_Style()
{
	return nullptr;
}

void PM_Kertas::display()
{
}

void PM_Kertas::set_show(int show)
{
	PM_Kertas::show = show;
}

int PM_Kertas::get_show()
{
	return PM_Kertas::show;
}
void PM_Kertas::set_Cor_x(float x)
{
	this->cor_x = x;
}

void PM_Kertas::set_Cor_y(float y)
{
	this->cor_y = y;
}

float PM_Kertas::get_Cor_x()
{
	return PM_Kertas::cor_x;
}

float PM_Kertas::get_Cor_y()
{
	return PM_Kertas::cor_y;
}