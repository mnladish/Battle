/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#include <iostream>
#include <cstdlib>
#include "menu.hpp"
#include "selectCreatureMenu.hpp"
#include "creature.hpp"
#include "die.hpp"
#include "battle.hpp"

int main()
{
  int choice;

  do
  { 
    displayMenu();
    choice = getChoice(); //input validation

    if(choice !=2)  //play game
    {
      switch(choice)
      {
        case 1: {
                int coinFlip;
                Creature* fighter1;
                Creature* fighter2;
                
                //select fighters
                std::cout << "Choose Fighter 1" << std::endl;
                fighter1 = displayCreatures();
//                fighter1 = displayCreatures(fighter1);
                std::cout << "Choose Fighter 2" << std::endl;
                fighter2 = displayCreatures();
//                fighter2 = displayCreatures(fighter2);  

                //randomly choose which fighter attacks first
                coinFlip = rand() % (2 + 1);

                //if coinflip == 1, fighter1 & fighter2 remain same
                //if ==2, they switch
                if(coinFlip == 2)
                {
                  Creature* temp = fighter1;
                  fighter1 = fighter2;
                  fighter2 = temp;
                }

                fighter1->getName();
                std::cout << " attacks first!" << std::endl;
                
                //fighters battle until one wins
                battle(fighter1, fighter2);
                }
                break;
      }
    }

  }while (choice !=2);

  return 0;
}

