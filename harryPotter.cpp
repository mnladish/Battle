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
#include "harryPotter.hpp"

HarryPotter::HarryPotter()
{
  armor = 0;
  strength = 10;
  name = "Harry Potter";
  attackDie = new Die(6);
  defendDie = new Die(6);
  life = 1;
  s = 10;
}

int HarryPotter::attack()
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

void HarryPotter::defend(int attackVal)
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
  std::cout << "Life #: " << life << std::endl;
  std::cout << "Strength Points: " << strength << "/" << s << std::endl;
  std::cout << "Armor: " << armor << std::endl;
  std::cout << "Defense roll: " << defendSum << std::endl;
  std::cout << std::endl;

  //calc actual attack value
  n = (attackVal - defendSum - armor);

  std::cout << "Damage done: " << attackVal << " - " << defendSum;
  std::cout << " - " << armor << " = " << n <<std::endl;

  //subtract attack value if positive to prevent
  //adding to strength accidentally
  if(n > 0)
  {
    std::cout << "Harry Potter strength: " << strength << " - " << n;
    strength = strength - n;
    std::cout << " = " << strength << "/" << s << std::endl;
    std::cout << std::endl;
  }

  else
  {
    std::cout << "No damange is done to Barbarian." << std::endl;
    std::cout << "Harry Potter strength: " << strength << "/" << s << std::endl;
    std::cout << std::endl;
  }

  //if Harry Potter has only died once, bring him back to life
  if((strength < 1) && (life == 1))
  {
    strength = 20;
    life = 2;
    s = 20;
    std::cout << "Harry Potter has come back to life!" << std::endl;
    std::cout << "Life #: " << life << std::endl;
    std::cout << "Strength Points: " << strength << std::endl;
    std::cout << std::endl;
  }
}
