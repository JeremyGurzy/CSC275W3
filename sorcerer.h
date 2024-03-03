#pragma once
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Included for pointers
#include <memory>
//Utilizing this allows us to not have to put std on every line
using namespace std;

//This class inherits the character class to
//Class defined for sorcerer
class sorcerer : public character
{ //Starting scope operator, this starts a code block

//For variables we want private 
private:
	//string for our scorcerers school
	string sorcererSchool;
	// string for our sorcerers study
	string sorcererStudy;
	// string for critical damage
	int criticalDamage;
	// string for conjure power
	string conjurePower;
// Our Methods are stored here
public:
	// This constructor has no return types
	sorcerer();

	// This constructor has return types for our characters
	sorcerer(string Name, int Strength, int Health, int Damage, int Critical, string School, string Study, string Conjure);

	//declare the function then put what it will do in respected cpp file
	void display();
	//our polymorphism for power, damage and conjure power
	void display(bool pDAndH, bool conAndCrit);
	
}; // Ending scope operator, this end a block of code.

//Structure created for our strings to be used with pointers
struct sorcererStuff
{ //Starting scope operator, this starts a code block
	//Strings for Items
	string sItem;
	string sItem2;
	string sItem3;
	string sItem4;

	//Strings for Spells
	string Spell;
	string Spell2;
	string Spell3;
	string Spell4;


	//Automatic constructor for circumventing user input.
	sorcererStuff()
	{//Starting scope operator, this starts a code block
		//Each variable has been assigned a value for items.
		sItem = "Book Of Vile Darkness";
		sItem2 = "Staff Of The Forgotten One";
		sItem3 = "Cloak of Levitation";
		sItem4 = "Eye of Agamotto";

		//Each variable has been assigned a value for spells.
		Spell = "Bestow Curse";
		Spell2 = "Curse of Eternal Torment";
		Spell3 = "Astral Projection";
		Spell4 = "Dreamwaking";


	}// Ending scope operator, this end a block of code.


};// Ending scope operator, this end a block of code.