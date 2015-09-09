// Filename: RPS.h
// Header file to declare all classes and their methods

//---------------------------------------------------------------------
// Class: CheckInput
// This class is called to check that the user input is valid data
//---------------------------------------------------------------------

//#ifndef H_RPS
//#define H_RPS

#pragma once
//#include <vector> // Used for Player inventory

class CheckInput
{ // No constructor necessary, no values
public:
   //-------------------------------------------------------------------
   // Method: CheckChoice. Checks the users choice of rock, paper,
   //         or scissors
   // Params: ( in )
   //-------------------------------------------------------------------
   bool CheckChoice ( int );

   //-------------------------------------------------------------------
   // Method: CheckRounds. Checks if valid number of rounds entered
   // Params: ( in )
   //-------------------------------------------------------------------
   bool CheckRounds ( int );
}; // End of CheckInput class

//---------------------------------------------------------------------
// Class: Player
// This class randomly chooses a number for a counter against the player
//---------------------------------------------------------------------
class Player
{
private:
   int choice;
   int score;
   int health;
   int damage;
   bool alive;
//   Weapon weapons[2]; // Notes: store three weapons in here

public:
   Player();

   //-------------------------------------------------------------------
   // Method: GetHealth, returns health
   // Params: none
   // Type: Inspector
   //-------------------------------------------------------------------
   int GetHealth ();

   //-------------------------------------------------------------------
   // Method: GetDamage, returns damage
   // Params: none
   // Type: Inspector
   //-------------------------------------------------------------------
   int GetDamage ();
   //-------------------------------------------------------------------
   // Method: setChoice, sets attack choice - used for player input
   // Params: int
   // Type: Inspector
   void SetChoice ( int );
   //-------------------------------------------------------------------
   // Method: GenerateChoice. Determines a move
   // Params: ( none )
   // Type: Mutator
   //-------------------------------------------------------------------
   void GenerateChoice();

   //-------------------------------------------------------------------
   // Method: GetChoice, returns choice
   // Params: ( none )
   // Type: Inspector
   //-------------------------------------------------------------------
   int GetChoice();

   //-------------------------------------------------------------------
   // Method: UpdateScore, modifies score with new results
   // Params: ( in )
   // Type: Mutator
   //-------------------------------------------------------------------
   void UpdateScore ( int );

   //-------------------------------------------------------------------
   // Method: GetScore, returns score
   // Params: ( in )
   // Type: Inspector
   //-------------------------------------------------------------------
   int GetScore();

   //-------------------------------------------------------------------
   // Method: IsAlive, returns alive
   // Params: ( none )
   // Type: Inspector
   //-------------------------------------------------------------------
   bool IsAlive ( );

//   int GetWeapDmg ( int ); // Commented out for debug
}; // End of Player

//---------------------------------------------------------------------
// Class: BattleHandler
// This class receives and compares opponents moves and determines winner
//---------------------------------------------------------------------
class BattleHandler
{
private:
   int result;
   bool gameOver;
public:
   BattleHandler(); // Constructor
 //---------------------------------------------------------------------
 // Method: setScores, calls Player::UpdateScore
 // Type: Mutator/Inspector? Calls a mutator method
 //---------------------------------------------------------------------
   void SetScores ( Player&, Player& );

 //---------------------------------------------------------------------
 // Method: printScores, calls Player.GetScore()
 // TYpe: Inspector (?)
 //---------------------------------------------------------------------
   void PrintScores ( Player&, Player& );

   //---------------------------------------------------------------------
   // Method: playRound, plays a single round of RPS based on input moves
   //         calls setScores and printScores. Maybe those should be public?
   // Type: ???
   //---------------------------------------------------------------------
   void PlayRound ( Player& , Player& );

   //-------------------------------------------------------------------
   // Method: IsGameOver, returns gameOver
   // type: INspector
   // Params: ( in )
   //-------------------------------------------------------------------
   bool IsGameOver ( );
};
 // End of BattleHandler class

// End of header file
