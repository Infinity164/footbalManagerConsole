#pragma once
#include <iostream>
#include <string>
using namespace std;
class Player
{
private:
	int id;
	string firstName = "";
	string secondName = "";
	float rating = 0;
	string position = "";
	int number = 0;
	string club = "";
public:
	Player(string firstName, string secondName);
	void setPlayersClub(string club);
	void setPlayersRating(float rating);
	void setPlayersNumber(int number);
	void setPlayersPosition(string position);
	string getString();
};

