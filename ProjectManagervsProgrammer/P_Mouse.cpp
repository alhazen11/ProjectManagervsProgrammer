#include "stdafx.h"
#include "P_Mouse.h"


P_Mouse::P_Mouse()
{
}


P_Mouse::~P_Mouse()
{
}


void P_Mouse::walk()
{
	pos_x += pos_x; // better implemented on for or any loop stats.
}


void P_Mouse::attack() {}
void P_Mouse::getHit(float firePower)
{
	hp = hp - firePower; // undetermined armor const
}


//setter
void P_Mouse::setStyle(string style)
{
	this->style = style;
}


void P_Mouse::setHp(float hp)
{
	this->hp = hp;
}


void P_Mouse::setDead(bool dead)
{
	this->dead = dead;
}
void P_Mouse::setPosX(float pos_x)
{
	this->pos_x = pos_x;
}
void P_Mouse::setPosY(float pos_y)
{
	this->pos_y = pos_y;
}

//getter
string P_Mouse::getName() { return nama; }


float P_Mouse::getSpeed() { return speed; }


string P_Mouse::getStyle() { return style; }


bool P_Mouse::cekDead() { return dead; }


float P_Mouse::getPosX() { return pos_x; }


float P_Mouse::getPosY() { return pos_y; }