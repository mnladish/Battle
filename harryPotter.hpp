/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include "die.hpp"
#include "creature.hpp"

class HarryPotter : public Creature
{
  private:
    int life;
    int s; //holds total starting strength

  public:
    HarryPotter();
    int attack();
    void defend(int attackVal);
};
#endif
