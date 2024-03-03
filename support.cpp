// iostream = Input and Output Stream, think of Stream as data flowing like water. A river flowing of data.
#include <iostream>
// Included string file to utilize strings
#include <string>
//Include support header file to utilize variables
#include "support.h"
//Include character header file to utilize variables
#include "character.h"


//Constructo for support
support::support() {}


//Defined our support class
support::support(string Name, int Health, int Power, int Damage, int Aid, int Shield, string Supporter) : character(Name, Health, Power, Damage)
{ //Starting scope operator, this starts a code block

	//Defined our supports health aid
	healthAid = Aid;

	//Defined our shield booster
	shieldBoost = Shield;

	//Defined our supports class
	supportType = Supporter;

}; // Ending scope operator, this end a block of code.

//This is our display method
void support::display()
{ //Starting scope operator, this starts a code block
	//calls character display
	character::display();
	// The two cout store variables for their description
	cout << "This support will aid you with " << healthAid << " health points in battle." << endl;
	cout << "Along with health, this support will give you " << shieldBoost << " shield points in battle." << endl;
	

} // Ending scope operator, this end a block of code.



