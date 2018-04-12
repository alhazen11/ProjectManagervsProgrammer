#include "stdafx.h"
#include "P_Keyboard.h"


P_Keyboard::P_Keyboard(int shows)
{
	this->hp = 450;
	this->attackDamage = 150;
	this->armor = 25;
	this->speed_attac = 0.1;
	this->speed_walk = 0.13;
	this->show = shows;
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

void P_Keyboard::display() {
	cout << "display Keyboard" << endl;
}

//setter
void P_Keyboard::setStyle(ALGIF_ANIMATION *style)
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


void P_Keyboard::setShow(int show)
{
	this->show = show;
}


//getter
string P_Keyboard::getName() { return nama; }


float P_Keyboard::getSpeed() { return speed; }

bool P_Keyboard::getBool()
{
	return P_Keyboard::dead;
}


ALGIF_ANIMATION *P_Keyboard::getStyle() { return style; }


bool P_Keyboard::cekDead() { return dead; }


float P_Keyboard::getPosX() { return pos_x; }


float P_Keyboard::getPosY() { return pos_y; }


int P_Keyboard::getShow() { return show; }