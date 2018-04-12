#include "GameField.h"


GameField::GameField(Player *play)
{
	this->Players = play;
	this->Level = play->get_Level();
	this->Score = play->get_Score();
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();
	white = al_map_rgb(240, 255, 250);
	font = al_load_font("Font/font.ttf", 24, 0);

}

GameField::~GameField()
{
}


void GameField::Mouse_drag()
{

	GameField::ev;
	if (drag) {
		al_draw_bitmap(algif_get_bitmap(mouse_s->get_Style(), al_get_time()), GameField::mouse_x, GameField::mouse_y, 0);
	}
	if (!al_is_event_queue_empty(GameField::queue)) {
		al_wait_for_event(GameField::queue, &ev);
		if (drag) {
			if (ev.type == ALLEGRO_EVENT_MOUSE_AXES) {
				GameField::mouse_x = ev.mouse.x;
				GameField::mouse_y = ev.mouse.y;
			}
		}
		if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
		{
			for (i[0] = 0; i[0] < slot_card.size(); i[0]++) {
				if (i[0] == 0) {
					if (ev.mouse.x >= 20 && ev.mouse.x < 80 && ev.mouse.y >= 20 && ev.mouse.y < 105) {
						mouse_s = slot_card[i[0]];
						drag = true;
						slot_card.erase(slot_card.begin() + i[0]);
					}
				}
				else if (i[0] == 1) {
					if (ev.mouse.x >= 94 && ev.mouse.x < 154 && ev.mouse.y >= 20 && ev.mouse.y < 105) {
						mouse_s = slot_card[i[0]];
						drag = true;
						slot_card.erase(slot_card.begin() + i[0]);

					}
				}
				else if (i[0] == 2) {
					if (ev.mouse.x >= 168 && ev.mouse.x < 228 && ev.mouse.y >= 20 && ev.mouse.y < 105) {
						mouse_s = slot_card[i[0]];
						drag = true;
						slot_card.erase(slot_card.begin() + i[0]);

					}
				}
				else if (i[0] == 3) {
					if (ev.mouse.x >= 240 && ev.mouse.x < 300 && ev.mouse.y >= 20 && ev.mouse.y < 105) {
						mouse_s = slot_card[i[0]];
						drag = true;
						slot_card.erase(slot_card.begin() + i[0]);

					}
				}
				else if (i[0] == 4) {
					if (ev.mouse.x >= 311 && ev.mouse.x < 375 && ev.mouse.y >= 20 && ev.mouse.y < 105) {
						mouse_s = slot_card[i[0]];
						drag = true;
						slot_card.erase(slot_card.begin() + i[0]);

					}
				}
				else if (i[0] == 5) {
					if (ev.mouse.x >= 385 && ev.mouse.x < 448 && ev.mouse.y >= 20 && ev.mouse.y < 105) {
						mouse_s = slot_card[i[0]];
						drag = true;
						slot_card.erase(slot_card.begin() + i[0]);

					}
				}
				else if (i[0] == 6) {
					if (ev.mouse.x >= 457 && ev.mouse.x < 522 && ev.mouse.y >= 20 && ev.mouse.y < 105) {
						mouse_s = slot_card[i[0]];
						drag = true;
						slot_card.erase(slot_card.begin() + i[0]);

					}
				}
				else if (i[0] == 7) {
					if (ev.mouse.x >= 530 && ev.mouse.x < 595 && ev.mouse.y >= 20 && ev.mouse.y < 105)
					{
						mouse_s = slot_card[i[0]];
						drag = true;
						slot_card.erase(slot_card.begin() + i[0]);

					}
				}
				else if (i[0] == 8) {
					if (ev.mouse.x >= 602 && ev.mouse.x < 667 && ev.mouse.y >= 20 && ev.mouse.y < 105) {
						mouse_s = slot_card[i[0]];
						drag = true;
						slot_card.erase(slot_card.begin() + i[0]);
					}
				}
			}
		}
	}
}

int GameField::get_Score()
{
	return GameField::Score;
}

void GameField::Proses()
{
	for (i[1] = 0; i[1] < slot_pm_line1.size(); i[1]++) {
		if (slot_pm_line1[i[1]] && slot_pm_line1[i[1]]->getDead() == true){
			for (i[2] = 0; i[2] < slot_bullet_pm_line1.size(); i[2]++)
			{
				if (slot_bullet_pm_line1[i[2]]->getPosX() >= slot_pm_line1[i[1]]->get_Cor_x() && slot_bullet_pm_line1[i[2]]->getPosX() < slot_pm_line1[i[1]]->get_Cor_x() && slot_bullet_pm_line1[i[2]]->getPosY() >= slot_pm_line1[i[1]]->get_Cor_y() && slot_bullet_pm_line1[i[2]]->getPosY() < slot_pm_line1[i[1]]->get_Cor_y()) {

				}
				else {

				}
			}
			for (i[3] = 0; i[3] < slot_p_line1.size(); i[3]++)
			{
				if (slot_bullet_pm_line1[i[2]]->getPosX() >= slot_pm_line1[i[1]]->get_Cor_x() && slot_bullet_pm_line1[i[2]]->getPosX() < slot_pm_line1[i[1]]->get_Cor_x() && slot_bullet_pm_line1[i[2]]->getPosY() >= slot_pm_line1[i[1]]->get_Cor_y() && slot_bullet_pm_line1[i[2]]->getPosY() < slot_pm_line1[i[1]]->get_Cor_y()) {

				}
				else {

				}
			}
		}
	}
	for (i[4] = 0; i[4] < slot_pm_line2.size(); i[4]++) {
		if (slot_pm_line2[i[4]] && slot_pm_line2[i[4]]->getDead() == true) {
			for (i[5] = 0; i[5] < slot_bullet_pm_line2.size(); i[5]++)
			{
				if (slot_bullet_pm_line1[i[2]]->getPosX() >= slot_pm_line1[i[1]]->get_Cor_x() && slot_bullet_pm_line1[i[2]]->getPosX() < slot_pm_line1[i[1]]->get_Cor_x() && slot_bullet_pm_line1[i[2]]->getPosY() >= slot_pm_line1[i[1]]->get_Cor_y() && slot_bullet_pm_line1[i[2]]->getPosY() < slot_pm_line1[i[1]]->get_Cor_y()) {

				}
				else {

				}
			}
			for (i[6] = 0; i[6] < slot_p_line2.size(); i[6]++)
			{
				if (slot_bullet_pm_line1[i[2]]->getPosX() >= slot_pm_line1[i[1]]->get_Cor_x() && slot_bullet_pm_line1[i[2]]->getPosX() < slot_pm_line1[i[1]]->get_Cor_x() && slot_bullet_pm_line1[i[2]]->getPosY() >= slot_pm_line1[i[1]]->get_Cor_y() && slot_bullet_pm_line1[i[2]]->getPosY() < slot_pm_line1[i[1]]->get_Cor_y()) {

				}
				else {

				}
			}
		}
	}
}

void GameField::Display()
{
	al_draw_textf(GameField::font, GameField::white, 980, 30, ALLEGRO_ALIGN_LEFT, "Stage : %d", GameField::Level);
	al_draw_textf(GameField::font, GameField::white, 980, 80, ALLEGRO_ALIGN_LEFT, "Score : %d", GameField::Score);
	for (i[7] = 0; i[7] < slot_p_line1.size(); i[7]++) {
		slot_p_line1[i[7]]->display();
	}
	for (i[8] = 0; i[8] < slot_p_line2.size(); i[8]++) {
		slot_p_line2[i[7]]->display();
	}
	for (i[9] = 0; i[9] < slot_pm_line1.size(); i[9]++) {
		slot_pm_line1[i[7]]->display();
	}
	for (i[10] = 0; i[10] < slot_pm_line2.size(); i[10]++) {
		slot_pm_line2[i[7]]->display();
	}
	for (i[11] = 0; i[11] < slot_bullet_pm_line1.size(); i[11]++) {
		slot_bullet_pm_line1[i[7]]->display();
	}
	for (i[12] = 0; i[12] < slot_bullet_pm_line2.size(); i[12]++) {
		slot_bullet_pm_line2[i[7]]->display();
	}
	for (i[13] = 0; i[13] < slot_card.size(); i[13]++) {
		if (i[13] == 0) {
			slot_card[i[13]]->set_Cor_x(48);
			slot_card[i[13]]->set_Cor_y(60);
			slot_card[i[13]]->display();
		}
		else if (i[13] == 1) {
			slot_card[i[13]]->set_Cor_x(123);
			slot_card[i[13]]->set_Cor_y(60);
			slot_card[i[13]]->display();
		}
		else if (i[13] == 2) {
			slot_card[i[13]]->set_Cor_x(195);
			slot_card[i[13]]->set_Cor_y(60);
			slot_card[i[13]]->display();
		}
		else if (i[13] == 3) {
			slot_card[i[13]]->set_Cor_x(268);
			slot_card[i[13]]->set_Cor_y(60);
			slot_card[i[13]]->display();
		}
		else if (i[13] == 4) {
			slot_card[i[13]]->set_Cor_x(343);
			slot_card[i[13]]->set_Cor_y(60);
			slot_card[i[13]]->display();
		}
		else if (i[13] == 5) {
			slot_card[i[13]]->set_Cor_x(414);
			slot_card[i[13]]->set_Cor_y(60);
			slot_card[i[13]]->display();
		}
		else if (i[13] == 6) {
			slot_card[i[13]]->set_Cor_x(486);
			slot_card[i[13]]->set_Cor_y(60);
			slot_card[i[13]]->display();
		}
		else if (i[13] == 7) {
			slot_card[i[13]]->set_Cor_x(558);
			slot_card[i[13]]->set_Cor_y(60);
			slot_card[i[13]]->display();
		}
		else if (i[13] == 8) {

			slot_card[i[13]]->set_Cor_x(632);
			slot_card[i[13]]->set_Cor_y(60);
			slot_card[i[13]]->display();
		}
	}

}

int GameField::get_Level()
{
	return GameField::Level;
}

int GameField::get_Times()
{
	return GameField::Times;
}


void GameField::set_Times(int time)
{
 GameField::Times=time;
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
		//ini samakan dengan waktu kemunculan programmer 100=1detik bikin sampai level 6
		GameField::slot_p_line1.push_back(laptop = new P_Laptop(1000));
		GameField::slot_p_line2.push_back(laptop = new P_Laptop(1000));
		GameField::slot_p_line2.push_back(laptop = new P_Laptop(200));
		GameField::slot_p_line2.push_back(laptop = new P_Laptop(500));
		GameField::slot_p_line2.push_back(laptop = new P_Laptop(400));
		GameField::slot_p_line2.push_back(laptop = new P_Laptop(600));
		GameField::slot_p_line2.push_back(laptop = new P_Laptop(800));
		GameField::slot_p_line2.push_back(laptop = new P_Laptop(1200));
		GameField::slot_card.push_back(pulpen = new PM_Pulpen());
		GameField::slot_card.push_back(pulpen = new PM_Pulpen());
		GameField::slot_card.push_back(pulpen = new PM_Pulpen());
		GameField::slot_card.push_back(pulpen = new PM_Pulpen());
		GameField::slot_card.push_back(pulpen = new PM_Pulpen());
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
