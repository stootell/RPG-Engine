// Filename: Player.cpp
// Class Implementation File for Player class
// Project: RPS
// Coder: Sam Tootell

#include <iostream>
#include <time.h>

#include "player.h"
//#include "constants.h"

//int sams_debug = 1;

// Default constructor
Player::Player ()
{
   choice = 0;
   //score = 0;
   health = 25;
   mana = 15;

   damage = 5;
   magicDamage = 7;
   alive = true;
   std::cout << "Player created!" << std::endl;
//   Weapon plWeapon[2];
}

int Player::GetHealth ()
{
   return health;
}

void Player::SetChoice ( int plChoice )
{
   choice = plChoice;
}

int Player::GetDamage ()
{
   // Let's vary the damage a little
   srand ( time ( NULL ) ); // Seed random number generator
  
   // Generate a number which will add or subtract to player damage
   int dmgModifier = ( ( rand () % damage  ) - 3 );
   
   return ( damage + dmgModifier );
}

int Player::GetMagicDmg()
{
   // Use a random number to vary magic damage
   srand ( time ( NULL ) ); // Seed rnadom number generator
   // Generate number to modify magic damage
   int damageModifier = ( ( rand () % magicDamage ) - 3 );
   if ( mana <= 0 ) // Out of mana
   {
      return -1; // Sentinal value for BattleHandler
   }
   mana--;
   return ( magicDamage + damageModifier );
}

void Player::TakeDamage ( int damage )
{
   health -= damage;
   if ( health <= 0 )
      alive = false;
}

void Player::GenerateChoice ()
{  
   srand ( time ( NULL )); // Seed random number generator
   choice = ( ( rand () % 3 ) + 1 ); // Chooses a number between 1-3
   std::cout << "\nYour opponent's choice is: " << choice << std::endl;
}

int Player::GetChoice ()
{
   return choice;
}

//int Player::GetScore()
//{
//   return score;
//}


//void Player::UpdateScore( int result )
//{
//   score += result;
//   if ( result < 0 )
//   {
//      health--;
//   }
//}
bool Player::IsAlive()
{
   return alive;
}

void Player::PrintStats ()
{
   std::cout << "Health: " << health << std::endl
             << "Living status: ";
             if ( alive == true )
             {
                std::cout << " Alive" << std::endl;
             }
             else
                std::cout << "Dead" << std::endl;
   std::cout << "Mana: " << mana << std::endl;
}

//int Player::GetWeapDmg ( int number)
//{
//   return weapons[number].GetDamge();
//}