/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "die.hpp"
#include "creature.hpp"
//#include <string>

class Barbarian : public Creature
{
  public:
    Barbarian();
    int attack();
    void defend(int attackVal);
};
#endif
