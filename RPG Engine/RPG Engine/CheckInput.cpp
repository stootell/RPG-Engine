// Filename: CheckInput.cpp
// Class Implementation File for CheckInput class
// Project: RPS
// Coder: Sam Tootell
// Status: Incomplete
#include "constants.h"
#include <iostream>
#include "CheckInput.h"

//#include "rps.h"

//int sams_debug = 1;

//CheckInput::CheckInput () {
// 
//}
   // nothing to initialize here
//}

bool CheckInput::CheckChoice ( int choice )
{
   // Returns true if valid choice is made
   return ( choice == ATTACK_t || choice == USE_MAGIC_t ||
            choice == USE_ITEM_t || choice == -1 );
}

// Unused as of right now
bool CheckInput::CheckRounds ( int numRounds )
{ // Returns true if valid number of rounds are selected
   return ( numRounds > 0 && numRounds <= 100 );
}