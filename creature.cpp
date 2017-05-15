/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#include <iostream>
#include "creature.hpp"
#include "barbarian.hpp"
#include "blueMen.hpp"

Creature::Creature()
{
  armor = 0;
  strength = 0;
  attackDie = new Die(0);
  defendDie = new Die(0);
}

void Creature::getName()
{
  std::cout << name;
}

int Creature::getStrength()
{
  return strength;
}
