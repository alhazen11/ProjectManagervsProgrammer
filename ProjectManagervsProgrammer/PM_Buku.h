#pragma once
#include "ProjectManager.h"
class PM_Buku :
	public ProjectManager
{
private:
	float Armor_piercing;
	float cor_x_bullet;
	float cor_y_bullet;
	string style_bullet;
public:
	PM_Buku();
	~PM_Buku();
	void Strike();
	void set_cor_bullet(float, float);
	void Attack();
	void set_Style(string);
	void get_Name();
	void get_Speed();
	void get_Style();
	void cek_Dead();
	void set_Hp();
	void set_Dead(bool);
	void set_Cor(float, float);
};

