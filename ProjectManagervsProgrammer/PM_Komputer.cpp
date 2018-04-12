#include "PM_Komputer.h"



PM_Komputer::PM_Komputer()
{
	PM_Komputer::Armor = 55;
	PM_Komputer::Attack_time = 0;
	PM_Komputer::Speed_attack = 0;
	PM_Komputer::Hp = 1000;
}


PM_Komputer::~PM_Komputer()
{
}


void PM_Komputer::set_Style(int tipe)
{
}

void PM_Komputer::getHit(float firePower)
{
	float armourz = PM_Komputer::Armor;
	float damage = firePower / (armourz + 1);
	if (PM_Komputer::Hp > 0) {
		PM_Komputer::Hp -= damage;
		if (PM_Komputer::Hp <= 0) {
			PM_Komputer::Hp = 0;
		}
	}
	else {
		PM_Komputer::Hp = 0;
	}
}

void PM_Komputer::getHit(float firePower, float armour)
{
	float armourReduced = PM_Komputer::Armor - armour;
	if (armourReduced > 1.0) {
		armourReduced = 1.0;
	}
	float damage = firePower / (PM_Komputer::Armor - armourReduced + 1.0);
	if (PM_Komputer::Hp > 0.0) {
		PM_Komputer::Hp -= damage;
		if (PM_Komputer::Hp <= 0.0) {
			PM_Komputer::Hp = 0.0;
		}
	}
	else {
		PM_Komputer::Hp = 0.0;
	}
}

string PM_Komputer::get_Name()
{
	return PM_Komputer::nama;
}

float PM_Komputer::get_Speed()
{
	return PM_Komputer::Speed_attack;
}

bool PM_Komputer::getDead()
{
	return false;
}

void PM_Komputer::set_Hp(float hp)
{
	this->Hp = hp;
}

void PM_Komputer::isDead(bool dead)
{
	this->Dead = dead;
}

ALGIF_ANIMATION * PM_Komputer::get_Style()
{
	return nullptr;
}

void PM_Komputer::display()
{
}

void PM_Komputer::set_show(int show)
{
	PM_Komputer::show = show;
}

int PM_Komputer::get_show()
{
	return PM_Komputer::show;
}
void PM_Komputer::set_Cor_x(float x)
{
	this->cor_x = x;
}

void PM_Komputer::set_Cor_y(float y)
{
	this->cor_y = y;
}

float PM_Komputer::get_Cor_x()
{
	return PM_Komputer::cor_x;
}

float PM_Komputer::get_Cor_y()
{
	return PM_Komputer::cor_y;
}