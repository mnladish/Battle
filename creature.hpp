/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP
#include "die.hpp"
#include <string>

class Creature
{
  protected:
    int armor;
    int strength;
    std::string name;
    Die* attackDie;
    Die* defendDie;

  public:
    Creature();
    virtual int attack() = 0;
    virtual void defend(int attackVal) = 0;
    void getName();
    int getStrength();
};
#endif
