#pragma once
#include "ProjectManager.h"
class PM_Pulpen :
	public ProjectManager
{
private:
	float Armor_pearcing;
	float cor_x_bullet;
	float cor_y_bullet;
	string style_bullet;
public:
	PM_Pulpen();
	~PM_Pulpen();
	void Attack() = 0;
	string set_Style(string) = 0;
	void getHit(float);
	void getHit(float, float);
	string get_Name() = 0;
	float get_Speed() = 0;
	bool getDead() = 0;
	void set_Hp(float) = 0;
	void isDead(bool) = 0;
	ALLEGRO_BITMAP *get_Style() = 0;
	void display();
	void set_show(int);
	int get_show();
	void set_Cor_x(float);
	void set_Cor_y(float);
	float get_Cor_x();
	float get_Cor_y();
};

