#include<string>
#include<iostream>
#include"Player.h"
#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include<string>
#define JACK 10
#define QUEEN 10
#define KING 10
#define ACE 11
#define OTHACE 1

using namespace std;

Player::Player() {}
Player::~Player(){}

Player::Player(int &BET, string &pname) {
	bet = BET;
	name = pname;
}

void Player::setBet(int BET) {
	bet = BET;
}
int Player::getBet()const {
	return bet;
}

void Player::setName(const string Nombre) {
	name = Nombre;
}
string Player::getName()const {
	return name;
}

int Player::DoubleDown(int dd) {
	return getBet()*2;
}
void Player::Stand() {
	vector <int> PHand;
	//void sumPHand
	//if stand then skip this person. 
	//	while ther person does not call stand everyone os playig else the person who calles that n
	int pPoints = 0;
	for (int i = 0; i < PHand.size(); i++)
	{
		pPoints += PHand[i];
	}
	//}
}

void Player::dealCards() {
	//deck
	std::array<int, 15> deck{ 1,2,3,4,5,6,7,8,9,10, JACK, KING, QUEEN, ACE, OTHACE };

	// obtain a time-based seed
	//unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	//shuffle
	random_shuffle(deck.begin(), deck.end());//, std::default_random_engine(seed));
	std::cout << "deal first two cards";
	std::cout << "Here are your first two cards, Card1: " << deck[0];
	std::cout << " and Card2:" << deck[1];
	return;
}




