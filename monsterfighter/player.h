#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "creature.h"
using namespace std;

namespace cs_creature
{
	class Player : public Creature
	{
	private:
		//data
		string playerName;
		string playerSpecies;



	public:
		//constructors
		Player();   //default 
		Player(int newStrength, int newHitpoints);

		//accessors
		string getSpecies() const;				//pure virtual of creature class
		string getName() const;	
		void getStats() const;

		//mutators
		string setName();
		string setSpecies();

		//member functions
		int getDamage() const;                  //Pure virtual of creature class

	};

}

#endif 

