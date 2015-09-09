#pragma once
#include "constants.h"
#include "Player.h" // Lets us use Player objects

class BattleHandler
{
private:
   int result;
   bool gameOver;
public:
   BattleHandler (); // Constructor

   //---------------------------------------------------------------------
   // Method: playRound, plays a single round of RPS based on input
   //         calls setScores and printScores. Maybe those should be public?
   // Type: ???
   //---------------------------------------------------------------------
   void PlayRound ( Player& , Player& );

   ////-------------------------------------------------------------------
   //// Method: PlayMagicRound, plays a single round where Player casts magic
   //// Type: ???
   ////-------------------------------------------------------------------
   //void PlayMagicRound ( Player&, Player &);

   //-------------------------------------------------------------------
   // Method: IsGameOver, returns gameOver
   // type: INspector
   // Params: ( in )
   //-------------------------------------------------------------------
   bool IsGameOver ();
   
   //-------------------------------------------------------------------
   // Method: Sleep, sleeps
   // type: ???
   // Params: ( in )
   //-------------------------------------------------------------------
   void Sleeper ( unsigned );

};
 // End of BattleHandler class