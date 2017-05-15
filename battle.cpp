/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#include <iostream>
#include "battle.hpp"

void battle(Creature* fighter1, Creature* fighter2)
{
  int i = 1;
  do
  {
    int attackVal;
   
    std::cout << "--------------------------" << std::endl;
    std::cout << "Round " << i << std::endl;
    std::cout << "--------------------------" << std::endl;
    
    //fighter1 attacks, fighter2 defends
    attackVal = fighter1->attack();
    fighter2->defend(attackVal);

    //fighter1 wins if attack is big enough
    if(fighter2->getStrength() <= 0)
    {
      fighter2->getName();
      std::cout << " has died!" << std::endl;
      fighter1->getName();
      std::cout << " wins!" << std::endl;
      return;
    }

    //fighter2 attacks, fighter1 defends
    attackVal = fighter2->attack();
    fighter1->defend(attackVal);
    
    //fighter2 wins if attack is beg enough
    if(fighter1->getStrength() <= 0)
    {
      fighter1->getName();
      std::cout << " has died!" << std::endl; 
      fighter2->getName();
      std::cout << " wins!" << std::endl;
      return;
    }

    ++i;
  }while (1);
}
