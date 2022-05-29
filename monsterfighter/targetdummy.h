#ifndef TARGETDUMMY_H
#define TARGETDUMMY_H

#include <iostream>
#include "creature.h"
namespace cs_creature
{
	class TargetDummy : public Creature
	{
	private:

	public:

		//constructors
		TargetDummy();   //default 
		TargetDummy(int newHitpoints);

		//accessors
		string getSpecies() const;

		//member functions
		int getDamage() const;

	};


}

#endif 
