/*
        MAIN
        CLIENT
*/

#include <iostream>
#include <ctime>
#include <iomanip>
#include <windows.h> //for sleep
#include <cstdlib>  //for terminal clear
#include "human.h"
#include "targetdummy.h"
#include "player.h"

using namespace std;
using namespace cs_creature;


//function prototypes
void mainMenu(int & menuChoice);
    void developerScreen();
    void gameScreen();
void debugMode();
    void arena(Creature& creature1, Creature& creature2);
    void autoArena(Creature& creature1, Creature& creature2);
void checkInput(int userInput, int min, int max);



int main()
{
    int menuChoice;

    mainMenu(menuChoice);

    switch (menuChoice)
    {
        case 1: 
        {
            cout << "You have entered the story mode\n";
            cout << "This mode is nopt implemented\n";
            return 0;
        }
        case 2:
        {
            cout << "You have entered the battle arena\n";
            cout << "This mode is not yet implemented\n";
            return 0;
        }
        case 3:
        {
            cout << "You have entered the Bestiary \n";
            cout << "This is not yet implemented\n";
            return 0;
        }
        case 4:
        {
            debugMode();
        }
        case 5:
        {
            cout << "\nYou are now quitting the program \n";
            return 0;
        }
    }

}


void debugMode()
{
    system("CLS");
    
    cout << "-----------------\n";
    cout << "-     DEBUG     -\n";
    cout << "-----------------\n";

    cout << "This is the debug testing environment\n";
    cout << endl << endl << endl;
    

    TargetDummy dummy1;
    Player human1;
    human1.getStats();
    cout << "\n\n\n\n";
    //autoArena(human1, dummy1);


}


void autoArena(Player& player, Creature& creature)
{

    cout << "   Battle 1" << endl;
    cout << "    Start  " << endl;
    cout << "---------------" << endl << endl;

    //display whos fighting
    cout << "\n" << player.getSpecies() << " " << player.getName() << " is now fighting " 
         << creature.getSpecies() << "\n";

    while (player.getHitpoints() > 0 && creature.getHitpoints() > 0)
    {
        //damage eachother
        player.setHitpoints(player.getHitpoints() - creature.getDamage());
        creature.setHitpoints(creature.getHitpoints() - player.getDamage());

        //display hitpoints
        if (player.getHitpoints() <= 0)
        {
            cout << player.getName() << " has now died" << endl;
        }
        else cout << player.getName() << " now has " << player.getHitpoints() 
                  << " hitpoints remaining" << endl;

        if (creature.getHitpoints() <= 0)
        {
            cout << creature.getSpecies() << " has now died" << endl;
        }
        else cout << creature.getSpecies() << " now has " << creature.getHitpoints() 
                  << " hitpoints remaining" << endl << endl;
       
        //handle death of both creatures
        if (player.getHitpoints() <= 0 && creature.getHitpoints() <= 0)
        {
            cout << player.getName() << " and " << creature.getSpecies() << " have both died. \n";
            break;
        }

        //if first creature dies
        if (player.getHitpoints() <= 0 && creature.getHitpoints() > 0)
        {
            cout << player.getName() << " has died. \n";
            break;
        }

        //if second creature dies
        if (creature.getHitpoints() <= 0 && creature.getHitpoints() > 0)
        {
            cout << creature.getSpecies() << "has died. \n";
            break;

        }
    }

   

    
    

    
}


void arena(Creature& creature1, Creature& creature2)
{
   
   

}


void mainMenu(int & menuChoice)
{
    //developer
    developerScreen();

    //wait for input
    Sleep(1500);
    system("CLS");

    //game screen
    gameScreen();

    //get menu selection
    int min = 1,
        max = 5;
    cout << "Make selection 1 - 5: ";
    cin >> menuChoice;

    //validate input
    checkInput(menuChoice, min, max);

}


void gameScreen()
{
    cout << left;
    cout << setw(100) << " _ _ _                    ______           ";
    cout << setw(100) << "( / ) )         _/_      (  / o    / _/_   ";
    cout << setw(100) << " / / /___ _  (  / _ _     -/-, _, /_ / _ _  ";
    cout << setw(100) << "/ / ((_/ / //_)(_(// (_  _/  ((_)/ /(_(// (_";
    cout << setw(100) << "                               /|           ";
    cout << setw(100) << "                              (/            ";
    
    cout << "---- Main Menu ---- \n";
    cout << "1. Story (not implemented) \n";
    cout << "2. Battle Arena (not implemented) \n";
    cout << "3. Beastiary (not implemented) \n" ;
    cout << "4. Debug \n";
    cout << "5. Quit \n";

}


void developerScreen()
{
    cout << endl << endl << endl << endl << endl << endl;
    cout << left;
    cout << setw(100) << ",--.   ,--.         ,---. ,---.,--.                             ";
    cout << setw(100) << "|   `.'   |,--.,--./  .-'/  .-'`--',--,---,                     ";
    cout << setw(100) << "|  |'.'|  ||  ||  ||  `-,|  `-,,--.|      |                     ";
    cout << setw(100) << "|  |   |  |'  ''  '|  .-'|  .-'|  ||  ||  |                     ";
    cout << setw(100) << "`--'   `--' `----' `--'  `--'  `--'`--''--'                     ";
    cout << setw(100) << "                ,--.   ,--.        ,--.                         ";
    cout << setw(100) << "                |   `.'   | ,--,--.|  |,-. ,---. ,--.--. ,---.  ";
    cout << setw(100) << "                |  |'.'|  |' ,-.  ||     /| .-. :|  .--'(  .-'  ";
    cout << setw(100) << "                |  |   |  |' '-'  ||  |  |' '--. |  |   .-'  `) ";
    cout << setw(100) << "                `--'   `--' `--`--'`--'`-' '----'`--'   `----'  ";
}


void checkInput(int userInput, int min, int max)
{
    while (userInput > max || userInput < min)
    {
        cout << "Inproper input \n";
        cout << "Make selection " << min << " - " << max << ": ";
        cin >> userInput;
    }
}