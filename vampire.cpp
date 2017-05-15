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
#include "vampire.hpp"

Vampire::Vampire()
{
  armor = 1;
  strength = 18;
  name = "Vampire";
  attackDie = new Die(12);
  defendDie = new Die(6);
}

int Vampire::attack()
{
  //rolls 1 attack die
  int attackVal1;
  
  attackVal1 = attackDie->roll();

  std::cout << "Attacker: " << name << std::endl;
  std::cout << "Strength Points: " << strength << "/18" << std::endl;
  std::cout << "Armor: " << armor << std::endl;
  std::cout << "Attack roll: " << attackVal1 << std::endl;
  std::cout << std::endl;

  return attackVal1;
}

void Vampire::defend(int attackVal)
{
  int defendVal1;
  int n;
  int flipCoin;

  flipCoin = rand() % (2 + 1);

  //50% of time, vampire glams attacker into
  //not attacking
  if(flipCoin == 2)
  {
    attackVal = 0;
    std::cout << "Vampire GLAMS attacker!" << std::endl;
    std::cout << "Attack roll is now: " << attackVal << std::endl;
    std::cout << std::endl;
  }

  //rolls 1 defense die
  defendVal1 = defendDie->roll();
  
  std::cout << "Defender: " << name << std::endl;
  std::cout << "Strength Points: " << strength << "/18" << std::endl;
  std::cout << "Armor: " << armor << std::endl;
  std::cout << "Defense roll: " << defendVal1 << std::endl;
  std::cout << std::endl;

  //calculate actual attack value
  n = (attackVal - defendVal1 - armor);

  std::cout << "Damage done: " << attackVal << " - " << defendVal1;
  std::cout << " - " << armor << " = " << n <<std::endl;

  //subtract attack value if positive to prevent
  //adding to strength accidentally
  if(n > 0)
  {
    std::cout << "Vampire strength: " << strength << " - " << n;
    strength = strength - n;
    std::cout << " = " << strength << "/18" << std::endl;
    std::cout << std::endl;
  }

  else
  {
    std::cout << "No damange is done to Vampire." << std::endl;
    std::cout << "Vampire strength: " << strength << "/18" << std::endl;
    std::cout << std::endl;
  }

}
