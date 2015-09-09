//---------------------------------------------------------------------
//
// Name:    
//
// Course:  CS 1430, Section 
//
// Purpose: To emulate a rock-paper-scissors game.
//
// Input:   Player enters a number of rounds and subsequent choice
//
// Output:  Program randomly chooses a counter-option, results compared
//          and winner is output
//---------------------------------------------------------------------

#include <iostream>
#include <string>
#include "constants.h"
#include "all_objects.h"
//using namespace std;


// All classes defined in rps.h and their respective implementation files

int main()
{
   int playerChoice;

   // Declare the classes we need
   Player mainPlayer, opponent;
   BattleHandler ourHandler;
   CheckInput inputChecker;

   // Generate our choices
   std::cout << "Choose your option:\n(1) Attack\n(2) Magic\n(3) Use Item (NOT WORKING YET)\n> ";
   std::cin >> playerChoice;

   // Check for valid input
   while ( inputChecker.CheckChoice ( playerChoice ) == false )
   {
      std::cout << "\nPlease enter a valid choice!\n"
                << "Choose your option:\n(1) Attack\n(2) Magic\n(3) Use Item (NOT WORKING YET)\n> ";
      std::cin >> playerChoice;
   }

   if ( playerChoice == USE_ITEM_t )
   {
      std::cout << "What part of \"NOT WORKING YET\" don't you get?\n";
      std::cout << "You get to attack instead\n";
      playerChoice = ATTACK_t;
   }
   //std::cout << "You entered: " << playerChoice
   //          << ". Unfortunately, you really meant to Attack" << std::endl;
   // Main loop
   while ( playerChoice != -1)
   {
      //playerChoice = 1; // For testing purposes
      // Force opponent to make a choice, then set the player's choice
      opponent.GenerateChoice();
      mainPlayer.SetChoice ( playerChoice );

      // Send to ourHandler to conduct the battle
      ourHandler.PlayRound ( mainPlayer, opponent );

      // Check if player or opponent is dead. If so, end the game
      if ( ourHandler.IsGameOver() == true )
      {
         std::cout << "Good game!\n";
         return 0;
      }
      
      // Player and opponent are still alive, let's play!
      std::cout << "\nChoose your option:\n(1) Attack\n(2) Magic\n(3) Use Item (NOT WORKING YET)\n> ";
      std::cin >> playerChoice;
     // Probably a cleaner way of doing this, but this works for now
      while ( inputChecker.CheckChoice ( playerChoice ) == false )
      {
         std::cout << "\nPlease enter a valid choice!\n"
                   << "Choose your option:\n(1) Attack\n(2) Magic\n(3) Use Item (NOT WORKING YET)\n> ";
         std::cin >> playerChoice;
      }
      if ( playerChoice == USE_ITEM_t )
      {
         std::cout << "What part of \"NOT WORKING YET\" don't you get?\n";
         std::cout << "You get to attack instead\n";
         playerChoice = ATTACK_t;
      }
   }
   return 0;
}