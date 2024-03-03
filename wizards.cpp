#include <iostream>
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Include wizard header file to utilize variables
#include "wizards.h"


//Constructor for Wizards
wizards::wizards() {}



//call constructor of wizards
wizards::wizards(string Name, int Health, int Power, int Damage, int Spell, string Class, string Move, int Special) : character(Name, Health, Power, Damage)
{//Starting scope operator, this starts a code block
	//Defined our spell points
	spellPoints = Spell;
	//Defined wizard class
	wizardClass = Class;
	//Defined our special move
	specialMove = Move;
	//Defined our special move damage
	specialMoveDamage = Special;
}; // Ending scope operator, this end a block of code.

//This is our display method
void wizards::display()
{//Starting scope operator, this starts a code block
	//calls character display
	character::display();
	// The three cout store variables for their description
	cout << "This wizard has " << spellPoints << " spell points." << endl;
	cout << "\nClass of Wizard: " << wizardClass << endl;
	cout << "Special Move: " << specialMove << ". Adds " << specialMoveDamage << " points to current attack damage." << endl;
	
}; // Ending scope operator, this end a block of code.

// Polymorphism for our Power, Health, spell points, and damage
void wizards::display(bool pDAndH, bool sPoints)
{//Starting scope operator, this starts a code block
	//if bool created for setting the opponent power and damage low for the simulation.
	if (pDAndH)
	{//Starting scope operator, this starts a code block

		cout << "\n\nSetting opponent Health to 100...\nSetting opponent Power to 50...\nSetting opponent Attack Damage to 1";

		//all three variables are set with new values
		health = 100;
		powerLevel = 50;
		attackDamage = 1;

		//All four couts display new values
		cout << "\n\nName: " << name << endl;
		cout << "Health = " << health << endl;
		cout << "Power = " << powerLevel << endl;
		cout << "Attack Damage = " << attackDamage << endl;


	} // Ending scope operator, this end a block of code.
	//else (when false) will display regular values
	else
	{//Starting scope operator, this starts a code block

		//all three couts diplay original value
		cout << "Health = " << health << endl;
		cout << "Power = " << powerLevel << endl;
		cout << "Attack Damage = " << attackDamage << endl;



	} // Ending scope operator, this end a block of code.
	//if (when true) will display new spell points
	if (sPoints)
	{ //Starting scope operator, this starts a code block

		cout << "\nSetting Spell Points to 0...";
		//spell point variable set to 0
		spellPoints = 0;
		//cout displays new spell point value
		cout << "\nThis wizard now has " << spellPoints << " spell points. He may not cast any spells." << endl;

	} // Ending scope operator, this end a block of code.
	//else (when false) will display original spell points
	else
	{ //Starting scope operator, this starts a code block
		//cout has original spell points
		cout << "This wizard has " << spellPoints << " spell points." << endl;

	} // Ending scope operator, this end a block of code.
} // Ending scope operator, this end a block of code.



