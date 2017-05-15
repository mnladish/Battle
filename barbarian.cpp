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

Barbarian::Barbarian()
{
  armor = 0;
  strength = 12;
  name = "Barbarian";
  attackDie = new Die(6);
  defendDie = new Die(6);
}

int Barbarian::attack()
{
  int attackVal1;
  int attackVal2;
  int attackSum;

  //rolls 2 attack die
  attackVal1 = attackDie->roll();
  attackVal2 = attackDie->roll();
  attackSum = attackVal1+attackVal2;

  std::cout << "Attacker: " << name << std::endl;
  std::cout << "Strength Points: " << strength << "/12" << std::endl;
  std::cout << "Armor: " << armor << std::endl;
  std::cout << "Attack roll: " << attackSum << std::endl;
  std::cout << std::endl;

  return attackSum;
}

void Barbarian::defend(int attackVal)
{
  int defendVal1;
  int defendVal2;
  int defendSum;
  int n;

  //rolls 2 defend die
  defendVal1 = defendDie->roll();
  defendVal2 = defendDie->roll();
  defendSum = defendVal1+defendVal2;

  std::cout << "Defender: " << name << std::endl;
  std::cout << "Strength Points: " << strength << "/12" << std::endl;
  std::cout << "Armor: " << armor << std::endl;
  std::cout << "Defense roll: " << defendSum << std::endl;
  std::cout << std::endl;

  //calculates actual attack value
  n = (attackVal - defendSum - armor);

  std::cout << "Damage done: " << attackVal << " - " << defendSum;
  std::cout << " - " << armor << " = " << n <<std::endl;

  //subtract attack value if positive to prevent
  //adding to strength accidentally
  if(n > 0)
  {
    std::cout << "Barbarian strength: " << strength << " - " << n;
    strength = strength - n;
    std::cout << " = " << strength << "/12" << std::endl;
    std::cout << std::endl;
  }

  else
  {
    std::cout << "No damange is done to Barbarian." << std::endl;
    std::cout << "Barbarian strength: " << strength << "/12" << std::endl;
    std::cout << std::endl;
  }
}
