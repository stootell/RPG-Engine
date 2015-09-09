#pragma once

//---------------------------------------------------------------------
// Class: Player
// This class maintains player stats and info
//---------------------------------------------------------------------
class Player
{
protected:
   int choice;
 //  int score;
   int health;
   int mana;
   int damage;
   int magicDamage;
   bool alive;
//   Weapon weapons[2]; // Notes: store three weapons in here

public:
   Player();

   //-------------------------------------------------------------------
   // Method: SetHealth, modifies health
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
   // Method: GetMagicDmg, returns magic damage
   // Params: none
   // Type: Inspector
   //-------------------------------------------------------------------
   int GetMagicDmg();
   //-------------------------------------------------------------------
   // Method: ReceiveDamage, subtracts damage from health
   // Params: ( in )
   // Type: Mutator
   //-------------------------------------------------------------------
   void TakeDamage ( int );
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
  /* void UpdateScore ( int );*/

   //-------------------------------------------------------------------
   // Method: GetScore, returns score
   // Params: ( in )
   // Type: Inspector
   //-------------------------------------------------------------------
   //int GetScore();

   //-------------------------------------------------------------------
   // Method: IsAlive, returns alive
   // Params: ( none )
   // Type: Inspector
   //-------------------------------------------------------------------
   bool IsAlive ( );

   // Method: PrintStats, prints status
   void PrintStats ();
//   int GetWeapDmg ( int ); // Commented out for debug
}; // End of Player