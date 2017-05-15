/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#include <iostream>
#include "getOptionCreature.hpp"
#include "selectCreatureMenu.hpp"
#include "creature.hpp"
#include "barbarian.hpp"
#include "blueMen.hpp"
#include "harryPotter.hpp"
#include "medusa.hpp"
#include "vampire.hpp"

/*****************************************
**          displayCreatures()          **
** This function shows the menu choices **
** available to the user after clearing **
** the screen.                          **
*****************************************/

Creature* displayCreatures()
{
  int creatureChoice;

  std::cout << std::endl;
  std::cout << "1. Barbarian" << std::endl;
  std::cout << "2. Blue Men" << std::endl;
  std::cout << "3. Harry Potter" << std::endl;
  std::cout << "4. Medusa" << std::endl;
  std::cout << "5. Vampire" << std::endl;
  std::cout << std::endl;

  creatureChoice = getCreatureChoice();
  
  //creates the proper subclass
  switch(creatureChoice)
  {
    case 1: { //Barbarian
              return new Barbarian();
            }
            break;
  
    case 2: { //Blue Men
              return new BlueMen();
            }
            break;
  
    case 3: { //Harry Potter
              return new HarryPotter();
            }
            break;
  
    case 4: { //Medusa
              return new Medusa();
            }
            break;
   
    case 5: { //Vampire
              return new Vampire();
            }
            break;
  }
  return 0;
}

/*****************************************
**           getCreatureChoice          **
** This function gets the user's choice **
*****************************************/

int getCreatureChoice()
{
  int choice;
  
  //input validation
  choice = getOptionCreature();

  return choice;
}

