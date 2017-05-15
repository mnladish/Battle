/********************************************************
** Program Name: Fantasy Combat
** Author: Megan Ladish
** Date: 5/14/17
** Description: This program is simulates a role-playing
** fantasy combat dice-rolling game between 5 types of 
** creatures. You run it with executable file fantasy.
********************************************************/

#ifndef DIE_HPP
#define DIE_HPP

class Die
{
  private:
    int sides;

  public:
    Die();
    Die(int);
    int roll();
};
#endif
