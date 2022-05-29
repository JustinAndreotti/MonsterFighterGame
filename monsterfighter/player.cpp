#include <iostream>
#include "creature.h"
#include "player.h"
using namespace std;

namespace cs_creature
{

	//****************
	//* constructors *
	//****************
	Player::Player()
	{
		setStrength(10);
		setHitpoints(10);
		
		playerName = setName();
		playerSpecies = setSpecies();
		system("CLS");
		
	}

	Player::Player(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints)
	{
		playerName = setName();
		playerSpecies = setSpecies();
		system("CLS");
	}






	//*************
	//* Accessors *
	//*************

	//returns the species of the player
	string Player::getSpecies() const
	{
		return playerSpecies;
	}

	//returns the name of the player
	string Player::getName() const
	{
		return playerName;
	}

	//prints out all stats regarding the player 
	void Player::getStats() const
	{
		cout << "  ----------------\n";
		cout << "  - Player Sheet -\n";
		cout << "  ----------------\n";

		cout << " * Player Stats * \n";
		cout << "Name: " << getName() << "\n";
		cout << "Race: " << getSpecies() << "\n";
		cout << "Hitpoints: " << Creature::getHitpoints() << "\n";
		cout << "Strength: " << Creature::getStrength() << "\n\n";

		cout << " * Player Equipment * \n";
		cout << "Weapon -- unarmed (weapons not yet implemented)\n";
		cout << "Highest Possible Hit: " << getStrength() << " damage";

	}




	//************
	//* Mutators *
	//************

	//set the name of the player
	string Player::setName()
	{
		string name;
		cout << "What is your name?: ";
		cin >> name;
		return name;
	}

	//set the species of the player
	string Player::setSpecies()
	{
		string species;
		cout << "Select a species\n";
		cout << "- Human\n";
		cout << "What is your species: ";
		cin >> species;
		
		//input validation to make sure an actual species is selected
		while (species != "Human")
		{
			cout << "\n\nNot a proper species\n";
			cout << "please pick from the list\n";
			cout << "- Human\n\n";
			cout << "What is your species: ";
			cin >> species;
			
		}

		return species;
	}




	//********************
	//* member functions *
	//********************
	

	//get damage of the player
		//currently only set up to get unarmed damage of a human
	int Player::getDamage() const
	{
		int damage;
		if (getSpecies() == "Human")
		{
			// unarmed damage based upon strength stat
			damage = (rand() % getStrength()) + 1;
			cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
			return damage;
		}
		
	}
	
}

