#include <iostream>
#include "creature.h"
using namespace std;

namespace cs_creature
{

    //Constructors
    Creature::Creature()
    {
        hitpoints = 10;
        strength = 10;
    }

    Creature::Creature(int newStrength, int newHitpoints)
    {
        strength = newStrength;
        hitpoints = newHitpoints;
    }

    //accessors

    int Creature::getHitpoints() const
    {
        return hitpoints;
    }

    int Creature::getStrength() const
    {
        int currentStrength = strength;
        return currentStrength;

    }


    //mutators
    void Creature::setStrength(int newStrength)
    {
        strength = newStrength;
    }

    void Creature::setHitpoints(int newHitpoints)
    {
        hitpoints = newHitpoints;
    }

  
}