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
#include "medusa.hpp"

Medusa::Medusa()
{
  armor = 3;
  strength = 8;
  name = "Medusa";
  attackDie = new Die(6);
  defendDie = new Die(6);
}

int Medusa::attack()
{
  int attackVal1;
  int attackVal2;
  int attackSum;
  
  //rolls 2 attack die
  attackVal1 = attackDie->roll();
  attackVal2 = attackDie->roll();
  attackSum = attackVal1+attackVal2;

  std::cout << "Attacker: " << name << std::endl;
  std::cout << "Strength Points: " << strength << "/8" << std::endl;
  std::cout << "Armor: " << armor << std::endl;
  std::cout << "Attack roll: " << attackSum << std::endl;
  std::cout << std::endl;

  //automatically kills opponent
  if(attackSum == 12)
  {
    std::cout << "Medusa kills her opponent!" << std::endl;
    attackSum = 50;
  }

  return attackSum;
}

void Medusa::defend(int attackVal)
{
  int defendVal1;
  int n;

  //rolls 1 defend die
  defendVal1 = defendDie->roll();

  std::cout << "Defender: " << name << std::endl;
  std::cout << "Strength Points: " << strength << "/8" << std::endl;
  std::cout << "Armor: " << armor << std::endl;
  std::cout << "Defense roll: " << defendVal1 << std::endl;
  std::cout << std::endl;

  //calculates actual attack value
  n = (attackVal - defendVal1 - armor);


  //subtract attack value if positive to prevent
  //adding to strength accidentally
  if(n > 0)
  {
    std::cout << "Medusa strength: " << strength << " - " << n;
    strength = strength - n;
    std::cout << " = " << strength << "/8" << std::endl;
    std::cout << std::endl;
  }

  else
  {
    std::cout << "No damange is done to Medusa." << std::endl;
    std::cout << "Medusa strength: " << strength << "/8" << std::endl;
    std::cout << std::endl;
  }
}
