#pragma once

#include<iostream>
//#include<string>
using namespace std;

class card
{
protected:
	string card_name;
	string card_color;
	int card_round;
public:
	card() : card_name("Expert"), card_color("Gray"), card_round(0){}
	//Set
	void setCard_Name(const string& recived) { this->card_name = recived; }
	void setCard_Color(const string& recived) { this->card_color = recived; }
	virtual void setCard_Round(const int& recived) = 0;

	//Get
	string getCard_Name() const { return this->card_name; }
	string getCard_Color() const { return this->card_color; }
	virtual int getCard_Round() const { return this->card_round; }

	~card() {}
};