#pragma once
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Included for pointers
#include <memory>
//Utilizing this allows us to not have to put std on every line
using namespace std;

//This class will also inherit the character class

//Class defined for wizards
class wizards : public character
{//Starting scope operator, this starts a code block

//For variables we want private
// Private is data that can only be accessed by the class
private:
	// integer for amount of spell points
	int spellPoints;
	//string for type of wizard
	string wizardClass;
	// string for special move
	string specialMove;
	// integer for special move damage
	int specialMoveDamage;
	

	// Our Methods are stored here
public:
	// This constructor has no return types
	wizards();
	// This constructor has return types for our characters
	wizards(string Name, int Health, int Power, int Damage, int Spell, string Class, string Move, int Special);
	//declare the function then put what it will do in respected cpp file
	void display();
	//void for our polymorphism with booleans
	void display(bool pDAndH, bool sPoints);
	

}; // Ending scope operator, this end a block of code.

//Structure created for our strings to be used with pointers
struct wizardStuff
{ //Starting scope operator, this starts a code block
	//Strings for Items
	string wItem;
	string wItem2;
	string wItem3;
	string wItem4;

	//Strings for Spells
	string wSpell;
	string wSpell2;
	string wSpell3;
	string wSpell4;
	
	
	//Automatic constructor for circumventing user input.
	wizardStuff()
	{ //Starting scope operator, this starts a code block
		//Each variable has been assigned a value for items.
		wItem = "Cape of the Mountebank";
		wItem2 = "Ruxxtin's Staff";
		wItem3 = "Arcane Grimoire";
		wItem4 = "The Shirt";

		//Each variable has been assigned a value for spells.
		wSpell = "Time Ravage";
		wSpell2 = "Tether Essence";
		wSpell3 = "Circle of Death";
		wSpell4 = "True Ressurection";

	}// Ending scope operator, this end a block of code.


};// Ending scope operator, this end a block of code.