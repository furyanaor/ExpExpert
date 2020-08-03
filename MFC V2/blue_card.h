#pragma once
#include "card.h"

class blue_card : public card {
private:
	int blue_stamina;
	int blue_energy, blue_energy_temp;

	int blue_attack;
	//int blue_defence;
	//int blue_spell2;
	//int blue_power;

	int blue_attx;
	//int blue_defx2;

public:
	blue_card() : blue_attack(0), blue_attx(0) { card_color = "blue"; } //: blue_energy(pow(2, received)) {card_round = received;}
	virtual void setCard_Round(const int& recived) { this->card_round = int(recived); blue_energy_temp = blue_energy = int(pow(2, recived)); }

	void setBlue_Stamina(const int& recived) { this->blue_stamina = recived; }
	void setBlue_Energy(const int& recived) { this->blue_energy = recived; }
	void setBlue_Energy_temp(const int& recived) { this->blue_energy_temp = recived; }

	void setBlue_Attack(const int& recived) {
		this->blue_attack = recived;
		this->blue_attx = int(pow(blue_attack, 2));
		this->blue_energy_temp = this->blue_energy - recived;
	}
	//void setblue_Attx556(const int& recived) { this->blue_attx556 = recived; }

	//Get
	int getBlue_Stamina() { return this->blue_stamina; }
	int getBlue_Energy() { return this->blue_energy; }
	int getBlue_Energy_temp() { return this->blue_energy_temp; }

	int getBlue_Attack() { return this->blue_attack; }

	int getBlue_Attx() { return this->blue_attx; }

	~blue_card() {}
};