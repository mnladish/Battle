/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "die.hpp"
#include "creature.hpp"

class Medusa : public Creature
{
  public:
    Medusa();
    int attack();
    void defend(int attackVal);
};
#endif
