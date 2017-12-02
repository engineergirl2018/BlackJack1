#include <iostream>
#include <vector>
#include<string>
#include "Player.h"
//#include "Dealer.h"
using namespace std;
int main()
{
	int i = 0;
	cout << "Welcome to Blackjack. The computer is the dealer and the maximum number of players for this game is 5. ";
	cout << "Welcome guys, lets begin the game" << endl;
	vector<Player>Vectorplayer;

	string name;//name of player call private member name in constr.
	int bet4game;//int bet  call private member bet in constr.
	int numPlayers;//num of players to create my players
	cout << "\nPlease enter the number of players: ";
	cin >> numPlayers;
	//Checking that number is between 1 and 5
	while (numPlayers < 1 || numPlayers < 5)
	{
		cout << "Re-enter the number of players between 1 and 5: ";
		cin >> numPlayers;

		if (numPlayers > 1 && numPlayers < 5) {
			cout << numPlayers << " players are welcome to the game.";
		}
		//Creating players objects for player class
		//We will keep doing this loop for each value of i

		for (i = 0; i < numPlayers; i++) {
			cout << "Enter name for " << i + 1 << endl;
			cin >> name;
			cout << "Enter your bet";
			cin >> bet4game;
			Player newPlayer(bet4game, name);//new object
			Vectorplayer.push_back(newPlayer);
			//cout << endl;

		}
	}
		//int i = 0;
	while (i < numPlayers)
	{
		int choice;
		cout << "Please choose one of the five options.";
		cout << "\n1.Hit\n2.Stand\n3.Split\n4.Double Down\n5.Surrender";
		cin >> choice;

		if (choice == 1) {
			Vectorplayer[i].dealCards();
		}
		else if (choice == 4)
		{

			Vectorplayer[i].DoubleDown(bet4game);
		}
	}
			return 0;

			/*else if (choice == 2)
			{
				P.Stand();
			}
			else if (choice == 3)
			{
				P.Split();
			}
			else if (choice == 4)
			{
				P.Double_Down();
			}
			else if (choice == 5)
			{
				P.Surrender();
			}
			else
			{
				cout << "Please choose a valid option (1-5).";
			}
				}
			}*/
		}

		//vector<Player>player;
		/*for (unsigned int i = 0; i < player.size(); i++) {
			cout << "player name:" << player[i].getName() << endl;
			cout << "player bet:" << player[i].getBet() << endl;
		}
		for (int j = 0; j < player.size; j++)
		{

			while ()
			{
				int choice;
				cout << "Please choose one of the five options.";
				cout << "\n1.Hit\n2.Stand\n3.Split\n4.Double Down\n5.Surrender";
				cin >> choice

					if (choice == 1)
					{
						Hit();
					}
					else if (choice == 2)
					{
						Stand();
					}
					else if (choice == 3)
					{
						Split();
					}
					else if (choice == 4)
					{
						Double_Down();
					}
					else if (choice == 5)
					{
						Surrender();
					}
					else
					{
						cout << "Please choose a valid option (1-5).";
					}
			}*/


			/*while () {
				int choice;
				cout << "Please choose one of the five options.";
				cout << "\n1.Hit\n2.Stand\n3.Split\n4.Double Down\n5.Surrender";
				cin >> choice

					if (choice == 1) {
						{
							{
								P.Hit();
							}
					else if (choice == 2)
					{
						P.Stand();
					}
					else if (choice == 3)
					{
						P.Split();
					}
					else if (choice == 4)
					{
						P.Double_Down();
					}
					else if (choice == 5)
					{
						P.Surrender();
					}
					else
					{
						cout << "Please choose a valid option (1-5).";
					}
						}
					}
			}
			return 0;

		*//*
			cout << "\nPlease enter the number of players: ";
			cin >> numPlayers;
			cout << "check" <<endl;
			//Checking that number is between 1 and 5
			while (numPlayers < 1 || numPlayers < 5){
				cout << "Re-enter the number of players between 1 and 5: ";
				cin >> numPlayers;

				if (numPlayers > 1 && numPlayers < 5)
					cout << numPlayers << " players are welcome to the game.";
			}
			//Creating players objects for player class
			//We will keep doing this loop for each value of i

			for (int i = 0; i < numPlayers; i++) {
				cout << "Enter name for " << i + 1 << endl;
				cin >> name;
				cout << "Enter your bet";
				cin >> bet4game;
				Player newPlayer(bet4game, name);//new object
				Vectorplayer.push_back(newPlayer);
				//cout << endl;

			}
				for (unsigned i = 0; i < Vectorplayer.size(); i++) {
					cout << "player name:" << Vectorplayer[i].getName() << endl;
					cout << "player bet:" << Vectorplayer[i].getBet() << endl;*/
	//}
	//return 0;

