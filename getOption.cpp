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
#include <sstream>


/*****************************************
**          getOption  ()               **
** This function verifies that the user **
** inputs a valid menu option and       **
** returns that option.                 **
*****************************************/

int getOption()
{
  int num;
               
  bool validInput;
                      
  do
  {
    validInput = true;
                                                        
    std::string strInt;
    std::cin >> strInt;

    for(unsigned int i = 0; i < strInt.length(); ++i)
    {
      if(!isdigit(strInt[i]))
      {
       validInput = false;
      }
    }
               
    std::stringstream strStream;
    strStream << strInt;
    strStream >> num;

    if((validInput == false) || ((num != 1) && (num != 2)))
    {
      std::cout << "Error: invalid input.";
      std::cout << " Enter a valid menu option." << std::endl;
    }
  }while((validInput == false) || ((num != 1) && (num != 2)));
  
  return num;
}
