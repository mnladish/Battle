/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#include <iostream>
#include "getOption.hpp"
#include "menu.hpp"

/*****************************************
 * **          displayMenu()               **
 * ** This function shows the menu choices **
 * ** available to the user after clearing **
 * ** the screen.                          **
 * *****************************************/

void displayMenu()
{
  std::cout << std::endl;
  std::cout << "Welcome to Fantasy Combat" << std::endl;
  std::cout << std::endl;
  std::cout << "1. Play Game" << std::endl;
  std::cout << "2. Quit" << std::endl;
  std::cout << std::endl;
}

/*****************************************
**           getChoice                  **
** This function gets the user's choice **
*****************************************/

int getChoice()
{
  int choice;
      
  std::cout << "Choose a menu option" << std::endl;

  choice = getOption();

  return choice;
}

