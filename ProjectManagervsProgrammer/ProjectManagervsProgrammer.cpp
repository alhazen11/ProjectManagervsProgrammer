// ProjectManagervsProgrammer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameMenu.h"

int main()
{
	GameMenu Menu;
	Menu.init();
	Menu.menu_cek();
	while (Menu.getStop()) {
		Menu.menu_init();
		Menu.menu_display();
		Menu.menu_event();
		if(Menu.getPlay()){
			Menu.play_menu();
		}
		else if(Menu.getLoad()){
			Menu.load_menu();
		}
		else if(Menu.getSetting()) {
			Menu.setting_menu();
		}
		else if(Menu.getQuit()) {
			Menu.quit_menu();
		}
		al_flip_display();
	}
	Menu.menu_destroy();
}