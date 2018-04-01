#include "Player.h"



Player::Player()
{
}


Player::~Player()
{
}

void Player::set_Score(int score)
{
	Player::Score += score;
}

void Player::set_Level()
{
	Player::Level += 1;
}

string Player::get_Name()
{
	return Player::Name;
}

int Player::get_Score()
{
	return Player::Score;
}

int Player::get_Level()
{
	return Player::Level;
}

void Player::set_Name(string name)
{
	Player::Name = name;
}
