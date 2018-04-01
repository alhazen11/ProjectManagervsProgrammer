#include "stdafx.h"
#include "P_Keyboard.h"


P_Keyboard::P_Keyboard()
{
}


P_Keyboard::~P_Keyboard()
{
}


void P_Keyboard::walk() 
{
	pos_x += pos_x; // better implemented on for or any loop stats.
}


void P_Keyboard::attack() {}
void P_Keyboard::getHit(float firePower) 
{
	hp = hp - firePower; // undetermined armor const
}


//setter
void P_Keyboard::setStyle(string style)
{
	this->style = style;
}


void P_Keyboard::setHp(float hp)
{
	this->hp = hp;
}


void P_Keyboard::setDead(bool dead)
{
	this->dead = dead;
}
void P_Keyboard::setPosX(float pos_x)
{
	this->pos_x = pos_x;
}
void P_Keyboard::setPosY(float pos_y)
{
	this->pos_y = pos_y;
}

//getter
string P_Keyboard::getName() { return nama; }


float P_Keyboard::getSpeed() { return speed; }


string P_Keyboard::getStyle() { return style; }


bool P_Keyboard::cekDead() { return dead; }


float P_Keyboard::getPosX() { return pos_x; }


float P_Keyboard::getPosY() { return pos_y; }