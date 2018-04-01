#include "stdafx.h"
#include "P_Laptop.h"


P_Laptop::P_Laptop()
{
}


P_Laptop::~P_Laptop()
{
}


void P_Laptop::walk() 
{
	pos_x += pos_x; // better implemented on for or any loop stats.
}


void P_Laptop::attack() {}
void P_Laptop::getHit(float firePower) 
{
	hp = hp - firePower; // undetermined armor const
}


//setter
void P_Laptop::setStyle(string style)
{
	this->style = style;
}


void P_Laptop::setHp(float hp)
{
	this->hp = hp;
}


void P_Laptop::setDead(bool dead)
{
	this->dead = dead;
}
void P_Laptop::setPosX(float pos_x)
{
	this->pos_x = pos_x;
}
void P_Laptop::setPosY(float pos_y)
{
	this->pos_y = pos_y;
}

//getter
string P_Laptop::getName() { return nama; }


float P_Laptop::getSpeed() { return speed; }


string P_Laptop::getStyle() { return style; }


bool P_Laptop::cekDead() { return dead; }


float P_Laptop::getPosX() { return pos_x; }


float P_Laptop::getPosY() { return pos_y; }