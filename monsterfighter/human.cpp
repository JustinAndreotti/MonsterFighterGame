#include <iostream>
#include "creature.h"
#include "human.h"
using namespace std;

namespace cs_creature
{
	
	//****************
	//* constructors *
	//****************
	Human::Human()
	{
		setStrength(10);
		setHitpoints(10);
	}

	Human::Human(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints)
	{

	}
	

	//*************
	//* Accessors *
	//*************
	string Human::getSpecies() const
	{
		string species = "human";
		return species;
	}

	//********************
	//* member functions *
	//********************
	int Human::getDamage() const
	{
		int damage;


		// Unarmed damage based on strength stat
		damage = (rand() % getStrength()) + 1;
		cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
		return damage;
	}

}