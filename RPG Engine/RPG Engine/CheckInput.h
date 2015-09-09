#pragma once

class CheckInput
{
public:
   //CheckInput();

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