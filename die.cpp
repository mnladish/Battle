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
#include "die.hpp"

Die::Die()
{
  sides = 0;
}

Die::Die(int s)
{
  sides = s;
}

int Die::roll()
{
  return rand() % (sides + 1);
}
