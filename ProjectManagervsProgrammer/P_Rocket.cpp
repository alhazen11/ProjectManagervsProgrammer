#include "stdafx.h"
#include "P_Rocket.h"


P_Rocket::P_Rocket(int shows)
{
	this->hp = 600;
	this->attackDamage = 165;
	this->armor = 10;
	this->speed_attac = 0.2;
	this->speed_walk = 0.17;
	this->show = shows;

}


P_Rocket::~P_Rocket()
{
}


void P_Rocket::walk()
{
	pos_x += pos_x; // better implemented on for or any loop stats.
}


void P_Rocket::attack() {}
void P_Rocket::getHit(float firePower)
{
	hp = hp - firePower; // undetermined armor const
}

void P_Rocket::display() {}

//setter
void P_Rocket::setStyle(ALGIF_ANIMATION *style)
{
	this->style = style;
}


void P_Rocket::setHp(float hp)
{
	this->hp = hp;
}


void P_Rocket::setDead(bool dead)
{
	this->dead = dead;
}
void P_Rocket::setPosX(float pos_x)
{
	this->pos_x = pos_x;
}
void P_Rocket::setPosY(float pos_y)
{
	this->pos_y = pos_y;
}


void P_Rocket::setShow(int show)
{
	this->show = show;
}


//getter
string P_Rocket::getName() { return nama; }


float P_Rocket::getSpeed() { return speed; }

bool P_Rocket::getBool()
{
	return P_Rocket::dead;
}


ALGIF_ANIMATION *P_Rocket::getStyle() { return style; }


bool P_Rocket::cekDead() { return dead; }


float P_Rocket::getPosX() { return pos_x; }


float P_Rocket::getPosY() { return pos_y; }


int P_Rocket::getShow() { return show; }