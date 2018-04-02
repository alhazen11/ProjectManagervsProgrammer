#include "GameField.h"


GameField::GameField(Player *play)
{
	GameField::Players = play;
	GameField::Level = play->get_Level();
	GameField::Score = play->get_Score();
	GameField::queue = queue;
	GameField::ev = ev;
}

GameField::~GameField()
{
}


void GameField::Mouse_drag()
{
	GameField::ev;
	if (drag) {
		if (ev.type == ALLEGRO_EVENT_MOUSE_AXES) {
			al_draw_bitmap(mouse_s->get_Style(), ev.mouse.x, ev.mouse.y, 0);
		}
		if (ev.type == ALLEGRO_EVENT_MOUSE_AXES) {

		}
	}
	for (int i = 0; i < slot_card.size(); i++) {
		slot_card[i]->get_Style();
		if (i == 1) {
			if (GameField::ev.mouse.x) {
				drag = true;
			}
		}
		else if (i == 2) {

		}
		else if (i == 3) {

		}
		else if (i == 4) {

		}
		else if (i == 5) {

		}
		else if (i == 6) {

		}
		else if (i == 7) {

		}
		else if (i == 8) {

		}
		else if (i == 9) {

		}

	}
}

int GameField::get_Score()
{
	return 0;
}

void GameField::Proses()
{
	for (int i = 0; i < slot_p_line1.size(); i++) {
		for (size_t i = 0; i < slot_bullet_pm_line1.size(); i++)
		{
		}
	}
	for (int i = 0; i < slot_p_line2.size(); i++) {
		for (size_t i = 0; i < slot_bullet_pm_line2.size(); i++)
		{
		}
	}
	for (int i = 0; i < slot_p_line1.size(); i++) {
		for (size_t i = 0; i < slot_pm_line1.size(); i++)
		{
		}
	}
	for (int i = 0; i < slot_p_line2.size(); i++) {
		for (size_t i = 0; i < slot_pm_line2.size(); i++)
		{
		}
	}
}

void GameField::Dispay()
{
	for (int i = 0; i < slot_p_line1.size(); i++) {
		slot_p_line1[i]->display();
	}
	for (int i = 0; i < slot_p_line2.size(); i++) {
		slot_p_line2[i]->display();
	}
	for (int i = 0; i < slot_pm_line1.size(); i++) {
		slot_pm_line1[i]->display();
	}
	for (int i = 0; i < slot_pm_line2.size(); i++) {
		slot_pm_line2[i]->display();
	}
	for (int i = 0; i < slot_bullet_pm_line1.size(); i++) {
		slot_bullet_pm_line1[i]->display();
	}
	for (int i = 0; i < slot_bullet_pm_line2.size(); i++) {
		slot_bullet_pm_line2[i]->display();
	}
}


ProjectManager * GameField::get_Card()
{
	return nullptr;
}

int GameField::get_Level()
{
	return 0;
}


void GameField::Lose()
{
}

void GameField::Finish()
{
}

void GameField::Init(int level)
{
	switch (level)
	{
	case 1:
		GameField::slot_pm_line1.push_back(buku);
		GameField::slot_pm_line2;
		GameField::slot_p_line1;
		GameField::slot_p_line2;
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		break;
	}
}

void GameField::set_ev(ALLEGRO_EVENT ev)
{
	GameField::ev = ev;
}

void GameField::set_queue(ALLEGRO_EVENT_QUEUE *queue)
{
	GameField::queue = queue;
}
