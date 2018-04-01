#include "stdafx.h"
#include "P_Rocket.h"


P_Rocket::P_Rocket()
{
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


//setter
void P_Rocket::setStyle(string style)
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

//getter
string P_Rocket::getName() { return nama; }


float P_Rocket::getSpeed() { return speed; }


string P_Rocket::getStyle() { return style; }


bool P_Rocket::cekDead() { return dead; }


float P_Rocket::getPosX() { return pos_x; }


float P_Rocket::getPosY() { return pos_y; }