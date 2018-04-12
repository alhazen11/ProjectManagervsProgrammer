#pragma once
#include "ProjectManager.h"
class PM_Pulpen :
	public ProjectManager
{
private:
	float Armor_pearcing;
	ALGIF_ANIMATION *pulpen_g;

public:
	PM_Pulpen();
	~PM_Pulpen();
	void Attack();
	void set_Style(ALGIF_ANIMATION *);
	void getHit(float);
	void getHit(float, float);
	string get_Name();
	float get_Speed();
	bool getDead();
	void set_Hp(float);
	void isDead(bool);
	ALGIF_ANIMATION *get_Style();
	void display();
	void set_show(int);
	int get_show();
	void set_Cor_x(float);
	void set_Cor_y(float);
	float get_Cor_x();
	float get_Cor_y();
};

