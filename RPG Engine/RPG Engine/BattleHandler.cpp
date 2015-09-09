// Filename: BattleHandler.cpp
// Class Implementation File for BattleHandler class
// Project: RPS
// Coder: Sam Tootell

//#include "rps.h"
#include "BattleHandler.h"
#include "Player.h"
#include "constants.h"
#include <iostream>
#include "windows.h"

//int sams_debug = 1;

BattleHandler::BattleHandler()
{
   result = 0;
   gameOver = false;
  // dmgMultiplier = 1;
   std::cout << "BattleHandler created!" << std::endl;
}


void BattleHandler::PlayRound ( Player& player, Player& opponent )
{
   int dmgToOpponent;
   if ( player.GetChoice() == USE_MAGIC_t )
      dmgToOpponent = player.GetMagicDmg();
   else
      dmgToOpponent = player.GetDamage();

   //int dmgToPlayer = opponent.GetDamage();
   std::cout << "You attack your opponent for " << dmgToOpponent
             << " damage!\n";
   opponent.TakeDamage ( dmgToOpponent );

   // Is opponent dead?
   if ( opponent.IsAlive() == false )
   { // Yes, player wins, end method
      std::cout << "Your opponent is dead, you WIN!\n";
      gameOver = true;
      return;
   }

   // Sleep for one second to ensure a random seed for opponent
   Sleeper ( sleepTime );

   // Get player damage
   int dmgToPlayer = opponent.GetDamage();

   // Player is attacked by opponent
   std::cout << "Your opponent attacks you for " << dmgToPlayer
             << " damage!\n";
   player.TakeDamage ( dmgToPlayer );

   // Is player dead?
   if ( player.IsAlive() == false )
   { // Yes, player loses, end method
      std::cout << "You have died, you LOSE!\n";
      gameOver = true;
      return; // Player is dead
   }
   // Display stats
   std::cout << "\nYour status:\n";
   player.PrintStats();

   std::cout << "\nYour enemy's status:\n";
   opponent.PrintStats();
}

bool BattleHandler::IsGameOver ( )
{
   return gameOver;
}

void BattleHandler::Sleeper ( unsigned milliseconds )
{
   Sleep( milliseconds );
}