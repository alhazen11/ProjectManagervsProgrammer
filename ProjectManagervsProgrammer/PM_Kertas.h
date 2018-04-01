#pragma once
#include "ProjectManager.h"
class PM_Kertas :
	public ProjectManager
{
private:
	float cor_x_bullet;
	float cor_y_bullet;
	string style_bullet;
public:
	PM_Kertas();
	~PM_Kertas();
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

