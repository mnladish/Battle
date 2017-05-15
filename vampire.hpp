/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "die.hpp"
#include "creature.hpp"

class Vampire : public Creature
{
  public:
    Vampire();
    int attack();
    void defend(int attackVal);
};
#endif
