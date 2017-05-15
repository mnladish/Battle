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
#include "blueMen.hpp"

BlueMen::BlueMen()
{
  armor = 3;
  strength = 12;
  name = "Blue Men";
  attackDie = new Die(10);
  defendDie = new Die(6);
}

int BlueMen::attack()
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

void BlueMen::defend(int attackVal)
{
  //roll 3 defend die
  if(strength > 8)
  {
    int defendVal1;
    int defendVal2;
    int defendVal3;
    int defendSum;
    int n;

    defendVal1 = defendDie->roll();
    defendVal2 = defendDie->roll();
    defendVal3 = defendDie->roll();
    defendSum = defendVal1+defendVal2+defendVal3;
   
    std::cout << "Defender: " << name << std::endl;
    std::cout << "Strength Points: " << strength << "/12" << std::endl;
    std::cout << "Armor: " << armor << std::endl;
    std::cout << "# Die: 3" << std::endl;
    std::cout << "Defense roll: " << defendSum << std::endl;
    std::cout << std::endl;


    //calc actual attack value
    n = (attackVal - defendSum - armor);

    //subtract attack value if positive to prevent
    //adding to strength accidentally
    if(n > 0)
    {
      std::cout << "Blue Men strength: " << strength << " - " << n;
      strength = strength - n;
      std::cout << strength << "/12" << std::endl;
      std::cout << std::endl;
    }
    
    else
    {
      std::cout << "No damage done to Blue Men." << std::endl;
      std::cout << "Blue Men strength: " << strength << "/12" << std::endl;
      std::cout << std::endl;
    }
  }

  //roll 2 defend die
  if((strength > 4) && (strength <= 8))
  {
    int defendVal1;
    int defendVal2;
    int defendSum;
    int n;

    defendVal1 = defendDie->roll();
    defendVal2 = defendDie->roll();
    defendSum = defendVal1+defendVal2;
    
    std::cout << "Defender: " << name << std::endl;
    std::cout << "Strength Points: " << strength << "/12" << std::endl;
    std::cout << "Armor: " << armor << std::endl;
    std::cout << "# Die: 2" << std::endl;  
    std::cout << "Defense roll: " << defendSum << std::endl;
    std::cout << std::endl;

    n = (attackVal - defendSum - armor);
 
    if(n > 0)
    {
      std::cout << "Blue Men strength: " << strength << " - " << n;
      strength = strength - n;
      std::cout << strength << "/12" << std::endl;
      std::cout << std::endl;
    }
    
    else
    {
      std::cout << "No damage done to Blue Men." << std::endl;
      std::cout << "Blue Men strength: " << strength << "/12" << std::endl;
      std::cout << std::endl;
    }
  }

  //roll 1 defend die
  if(strength <= 4)
  {
    int defendVal1;
    int n;

    defendVal1 = defendDie->roll();
    
    std::cout << "Defender: " << name << std::endl;
    std::cout << "Strength Points: " << strength << "/12" << std::endl;
    std::cout << "Armor: " << armor << std::endl;
    std::cout << "# Die: 1" << std::endl;
    std::cout << "Defense roll: " << defendVal1 << std::endl;
    std::cout << std::endl;

    n = (attackVal - defendVal1 - armor);
 
    if(n > 0)
    {
      std::cout << "Blue Men strength: " << strength << " - " << n;
      strength = strength - n;
      std::cout << strength << "/12" << std::endl;
      std::cout << std::endl;   
    }
    
    else
    {
      std::cout << "No damage done to Blue Men." << std::endl;
      std::cout << "Blue Men strength: " << strength << "/12" << std::endl;
      std::cout << std::endl;
    }
  }
}


