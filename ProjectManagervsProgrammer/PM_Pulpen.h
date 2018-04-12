#pragma once
#include "ProjectManager.h"
class PM_Pulpen :
	public ProjectManager
{
private:
	float Armor_pearcing;
	//bikin ini
	ALGIF_ANIMATION *pulpen_g;
	ALGIF_ANIMATION *pulpen_g_a;
	ALGIF_ANIMATION *pulpen_g_d;

public:
	PM_Pulpen();
	~PM_Pulpen();
	void Attack();
	//bikin ini disetiap class PM
	void set_Style(int);
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

