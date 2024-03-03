// iostream = Input and Output Stream, think of Stream as data flowing like water. A river flowing of data.
#include <iostream>
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"

//This character C++ File is our 
//Include header file and will define what the methods do

//Constructor for character
character::character() {}

//This constructor has overloads
character::character(string Name, int Health, int Power, int Damage)
{//Starting scope operator, this starts a code block
	//defined name
	name = Name;
	//defined power level
	powerLevel = Power;
	//defined health
	health = Health;
	//defined damage
	attackDamage = Damage;

	//encapsulation means rules for data
	// if is for checking health for 0
	if (Health == 0 )
	{
		//cout will display when character is at 0 health
		cout << "\n\nThis character has expired." << endl;
		

	}
	// Else is for if character is not at 0, remain alive
	else
	{
		// health variable for just normal health
		health = Health;
	}

} // Ending scope operator, this end a block of code.

// remember to put void in front of the method because it is not a constructor
void character:: display() 
{ //Starting scope operator, this starts a code block

	// all couts display our variables

	cout << "\nName: " << name << endl;

	cout << "Health = " << health << endl;

	cout << "Power Level = " << powerLevel << endl;

	cout << "Attack Damage = " << attackDamage << endl;


}; // Ending scope operator, this end a block of code.