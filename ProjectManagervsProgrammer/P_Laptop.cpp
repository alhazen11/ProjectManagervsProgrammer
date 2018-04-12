#include "stdafx.h"
#include "P_Laptop.h"


P_Laptop::P_Laptop(int shows)
{
	this->hp = 500;
	this->attackDamage = 155;
	this->armor = 20;
	this->speed_attac = 0.13;
	this->speed_walk = 0.15;
	this->show = shows;

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

void P_Laptop::display() {
}

//setter
void P_Laptop::setStyle(ALGIF_ANIMATION *style)
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


void P_Laptop::setShow(int show)
{
	this->show = show;
}

bool P_Laptop::getBool()
{
	return P_Laptop::dead;
}


//getter
string P_Laptop::getName() { return nama; }


float P_Laptop::getSpeed() { return speed; }


ALGIF_ANIMATION *P_Laptop::getStyle() { return style; }


bool P_Laptop::cekDead() { return dead; }


float P_Laptop::getPosX() { return pos_x; }


float P_Laptop::getPosY() { return pos_y; }


int P_Laptop::getShow() { return show; }