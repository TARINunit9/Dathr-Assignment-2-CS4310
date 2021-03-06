#ifndef MENU_H
#define MENU_H 1

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class menuSys	//menu class for user traversal
{

public:
	menuSys();	//standard constructor
	~menuSys();	//standard destructor
	void selectGame();	//sets which game is being played
	void selectPuzzle();	//selects a specific puzzle
	void makeMove();	//makes a move
	bool isWin(); //checks if the game is won
	private:
	string puzzle;	//stores puzzle name
	int game;	//stores game choice
	int choice;	//used to store User choices for switch statements
};

void menuSys::selectGame()
{
	int a;
	cout << "Please pick a number between 1 and 2:" << endl << "1=picross   2=rullo" << endl;
	cin >> a;
	cout << endl;
	switch (a)
	{
	case '1':
		cout << "Cool! You picked Picross!" << endl;
		break;
	case '2':
		cout << "Neat! Rullo Rules!" << endl;
		break;
	default://change this to either recurse or exit
		cout << "You miscreant! It's Nonograms for you!" << endl;
		a = 1;
		break;
	}
	game = a;
};
void menuSys::selectPuzzle()
{
	cout << "Now, please select a puzzle name: ";
	cin >> puzzle;
	cout << endl << "thanks! you will open " << puzzle << "!" << endl;
	
};
void menuSys::makeMove()
{

};
bool menuSys::isWin()
{

};

menuSys::menuSys()
{
	
	
};
menuSys::~menuSys()
{

};

#endif
