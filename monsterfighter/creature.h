#ifndef CREATURE_H
#define CREATURE_H


#include <iostream>
using std::string;

namespace cs_creature
{

    class Creature 
    {
    private:
        int strength;           // how much damage this Creature inflicts
        int hitpoints;          // how much damage this Creature can sustain
       
    public:
        

        //constructor
        Creature();             // initialize to Human, 10 strength, 10 hitpoints
        Creature(int newStrength, int newHitpoints);

        //accessors
        virtual string getSpecies() const = 0;    // returns the type of the species
        int getHitpoints() const;
        int getStrength() const;
        

        //mutators
        void setStrength(int newStrength);
        void setHitpoints(int newHitpoints);


        //Member functions
        virtual int getDamage() const = 0;       // returns the amount of damage this Creature
                                            
        

        
    };

    
   

}

#endif
