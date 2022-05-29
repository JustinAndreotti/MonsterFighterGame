#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "creature.h"
namespace cs_creature
{
	class Human : public Creature
	{
	private:

	public:

		//constructors
		Human();   //default 
		Human(int newStrength, int newHitpoints);

		//accessors
		string getSpecies() const;

		//member functions
		int getDamage() const;


	};


}

#endif 


