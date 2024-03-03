#pragma once
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"

//Utilizing this allows us to not have to put std on every line
using namespace std;

//Class defined for support
class support : public character 
{ //Starting scope operator, this starts a code block

// Private is data that can only be accessed by the class
protected:
	// integer for health aid
	int healthAid;
	// integer for shield boost
	int shieldBoost;
	// string for type of supporter
	string supportType;

// Our Methods are stored here
public:
	// This constructor has no return types
	support();

	// This constructor has return types for our characters
	support(string Name, int Strength, int Health, int Damage, int Aid, int Shield, string Supporter);

	//declare the function then put what it will do in respected cpp file
	void display();


}; // Ending scope operator, this end a block of code.

//Structure created for our strings to be used with pointers
struct supportStuff
{ //Starting scope operator, this starts a code block
	//Strings for Items
	string supItem1;
	string supItem2;
	string supItem3;

	//Automatic constructor for circumventing user input.
	supportStuff()
	{ //Starting scope operator, this starts a code block

		//Each variable has been assigned a value for items.
		supItem1 = "Polymorph Grenade";
		supItem2 = "Health Potion";
		supItem3 = "Armor Rebuild Kit";


	}// Ending scope operator, this end a block of code.



};// Ending scope operator, this end a block of code.