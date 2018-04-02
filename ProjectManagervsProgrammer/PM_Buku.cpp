#include "PM_Buku.h"



PM_Buku::PM_Buku()
{
	PM_Buku::Armor = 20;
	PM_Buku::Attack_time = 165;
	PM_Buku::Speed_attack = 0.2;
	PM_Buku::Hp = 350;
}


PM_Buku::~PM_Buku()
{
}

void PM_Buku::Attack()
{
}

string PM_Buku::set_Style(string)
{
	return string();
}

void PM_Buku::getHit(float firePower)
{
	float armourz = PM_Buku::Armor;
	float damage = firePower / (armourz + 1);
	if (PM_Buku::Hp > 0) {
		PM_Buku::Hp -= damage;
		if (PM_Buku::Hp <= 0) {
			PM_Buku::Hp = 0;
		}
	}
	else {
		PM_Buku::Hp = 0;
	}
}

void PM_Buku::getHit(float firePower, float armour)
{
	float armourReduced = PM_Buku::Armor - armour;
	if (armourReduced > 1.0) {
		armourReduced = 1.0;
	}
	float damage = firePower / (PM_Buku::Armor - armourReduced + 1.0);
	if (PM_Buku::Hp > 0.0) {
		PM_Buku::Hp -= damage;
		if (PM_Buku::Hp <= 0.0) {
			PM_Buku::Hp = 0.0;
		}
	}
	else {
		PM_Buku::Hp = 0.0;
	}
}

string PM_Buku::get_Name()
{
	return PM_Buku::nama;
}

float PM_Buku::get_Speed()
{
	return PM_Buku::Speed_attack;
}


bool PM_Buku::getDead()
{
	return false;
}

void PM_Buku::set_Hp(float hp)
{
	this->Hp = hp;
}

void PM_Buku::isDead(bool dead)
{
	this->Dead = dead;
}

ALLEGRO_BITMAP * PM_Buku::get_Style()
{
	return nullptr;
}


void PM_Buku::display()
{
}

void PM_Buku::set_show(int show)
{
	PM_Buku::show = show;
}

int PM_Buku::get_show()
{
	return PM_Buku::show;
}

void PM_Buku::set_Cor_x(float x)
{
	this->cor_x = x;
}

void PM_Buku::set_Cor_y(float y)
{
	this->cor_y = y;
}

float PM_Buku::get_Cor_x()
{
	return PM_Buku::cor_x;
}

float PM_Buku::get_Cor_y()
{
	return PM_Buku::cor_y;
}
