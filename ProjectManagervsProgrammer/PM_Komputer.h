#pragma once
#include "ProjectManager.h"
class PM_Komputer :
	public ProjectManager
{
public:
	PM_Komputer();
	~PM_Komputer();
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

