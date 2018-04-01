#include "stdafx.h"
#include "Programmer.h"


Programmer::Programmer()
{
}


Programmer::~Programmer()
{
}

//setter
void Programmer::setStyle(string style)
{
	this->style = style;
}


void Programmer::setHp(float hp)
{
	this->hp = hp;
}


void Programmer::setDead(bool dead)
{
	this->dead = dead;
}
void Programmer::setPosX(float pos_x)
{
	this->pos_x = pos_x;
}
void Programmer::setPosY(float pos_y)
{
	this->pos_y = pos_y;
}

//getter
string Programmer::getName() { return nama; }


float Programmer::getSpeed() { return speed; }


string Programmer::getStyle() { return style; }


bool Programmer::cekDead() { return dead; }


float Programmer::getPosX() { return pos_x; }


float Programmer::getPosY() { return pos_y; }