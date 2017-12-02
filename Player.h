#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include<iostream>
#include <vector>



using namespace std;

class Player {
public:
	Player();//default constructo
	
	~Player();//dectructor//Help
	
	Player(int&, string&);//bet and name of player constructor
	//Constuctor
	void setBet(int);
	int getBet()const;

	void setName(string);
	string getName()const;

	int DoubleDown(int);
	void dealCards();
	void Stand();

private:
	string name;
	int InitialBalance = 1000;
	vector <int> Hand;
	int HandSum;
	int bet;
};
#endif 
/*
class Player
{
public:
Player(InitialBalance, bet);
~Player();
void Busted();
void Hit();
void Split();
void Double_Down();
void Surrender();
void HandSum();

private:
int InitialBalance = 1000;
vector <int> Hand;
int HandSum;
int bet;
};
We can not do this until at least one thing compiiles*/

