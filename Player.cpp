#include "Player.h"

Player::Player(string firstName, string secondName)
{
	this->firstName = firstName;
	this->secondName = secondName;
}

void Player::setPlayersClub(string club)
{
	this->club = club;
}

void Player::setPlayersRating(float rating)
{
	this->rating = rating;
}

void Player::setPlayersNumber(int number)
{
	this->number = number;
}

void Player::setPlayersPosition(string position)
{
	this->position = position;
}

string Player::getString()
{
	string str = "";
	str += to_string(id) + ";";
	str += firstName + ";";
	str += secondName + ";";
	str += to_string(rating) + ";";
	str += position + ";";
	str += to_string(number) + ";";
	str += club + ";";
	return str;
}
