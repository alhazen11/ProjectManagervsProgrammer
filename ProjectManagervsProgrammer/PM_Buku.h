#pragma once
#include "ProjectManager.h"
class PM_Buku :
	public ProjectManager
{
private:
	float Armor_piercing;
public:
	PM_Buku();
	~PM_Buku();	
	void Attack() = 0;
	void set_Style(ALGIF_ANIMATION *) = 0;
	void getHit(float);
	void getHit(float, float);
	string get_Name() = 0;
	float get_Speed() = 0;
	bool getDead() = 0;
	void set_Hp(float) = 0;
	void isDead(bool) = 0;
	ALGIF_ANIMATION *get_Style() = 0;
	void display();
	void set_show(int);
	int get_show();
	void set_Cor_x(float);
	void set_Cor_y(float);
	float get_Cor_x();
	float get_Cor_y();
};

