#include <iostream>
#include "creature.h"
#include "targetdummy.h"
using namespace std;

namespace cs_creature
{

	//****************
	//* constructors *
	//****************
	TargetDummy::TargetDummy()
	{
		setStrength(0);
		setHitpoints(100);
	}

	TargetDummy::TargetDummy(int newHitpoints)
	{
		setStrength(0);
		Creature::setHitpoints(newHitpoints);
	}



	//*************
	//* Accessors *
	//*************
	string TargetDummy::getSpecies() const
	{
		string species = "target dummy";
		return species;
	}



	//********************
	//* member functions *
	//********************
	int TargetDummy::getDamage() const
	{
		int damage = 0;
		cout << "The target dummy does not attack \n";

		return damage;
	}

}