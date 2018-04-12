#include "stdafx.h"
#include "P_Mouse.h"


P_Mouse::P_Mouse(int shows)
{
	this->hp = 550;
	this->attackDamage = 160;
	this->armor = 15;
	this->speed_attac = 0.15;
	this->speed_walk = 0.15;
	this->show = shows;

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

void P_Mouse::display() {}

//setter
void P_Mouse::setStyle(ALGIF_ANIMATION *style)
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


void P_Mouse::setShow(int show)
{
	this->show = show;
}


//getter
string P_Mouse::getName() { return nama; }


float P_Mouse::getSpeed() { return speed; }

bool P_Mouse::getBool()
{
	return P_Mouse::dead;
}


ALGIF_ANIMATION *P_Mouse::getStyle() { return style; }


bool P_Mouse::cekDead() { return dead; }


float P_Mouse::getPosX() { return pos_x; }


float P_Mouse::getPosY() { return pos_y; }


int P_Mouse::getShow() { return show; }