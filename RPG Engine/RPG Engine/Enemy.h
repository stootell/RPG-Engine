#pragma once
#include "rps.h"
#include <iostream>
class Enemy :
   Player // Inherits from Player class
{
private:
   std::string dialogue[3]; // Fix magic number later
public:
   Enemy(void); // Default Constructor
   ~Enemy(void); // Destructor
   
   //-------------------------------------------------------------------
   // Method: GetDialogue, returns a dialogue
   //         or scissors
   // Params: ( in )
   //-------------------------------------------------------------------
};

