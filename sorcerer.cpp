// iostream = Input and Output Stream, think of Stream as data flowing like water. A river flowing of data.
#include <iostream>
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Include sorcerer header file to utilize variables
#include "sorcerer.h"

//This is our enemy class

//Constructor for sorcerer
// This doesn't do anything
sorcerer::sorcerer() {}


//Defined our sorcerer class
sorcerer::sorcerer(string Name, int Health, int Power, int Damage, int Critical, string School, string Study, string Conjure) : character(Name, Health, Power, Damage)
{ //Starting scope operator, this starts a code block
	
	//Defined our sorcerer school
	sorcererSchool = School;
	//Defined our sorcerers study
	sorcererStudy = Study;
	//Defined our critical damage
	criticalDamage = Critical;
	//Defined our conjure Power
	conjurePower = Conjure;
}; // Ending scope operator, this end a block of code.
//This is our display method
void sorcerer::display()
{ //Starting scope operator, this starts a code block
	//calls character display
	character::display();
	// The two cout store variables for their description
	cout << "This sorcerer went to the school of " << sorcererSchool << " where he studied in " << sorcererStudy << endl;

	cout << "When drawing enough power from the dark realm, this sorcerers critical damage adds " << criticalDamage << " points to their attack damage." << endl;

	cout << "This sorcerer can conjure power from " << conjurePower << endl;



	


} // Ending scope operator, this end a block of code.

//This is our function with polymorphism
void sorcerer::display(bool pDAndH, bool conAndCrit)
{//Starting scope operator, this starts a code block
	//if bool created for setting the opponent power and damage low for the simulation.
	if (pDAndH)
	{//Starting scope operator, this starts a code block
		// all cout excluding this one have new values
		cout << "\n\nSetting opponent Health to 100...\nSetting opponent Power to 50...\nSetting opponent Attack Damage to 1...";

		//Set health to 100
		health = 100;
		//set power level to 50
		powerLevel = 50;
		//set damage to 1
		attackDamage = 1;
		//this cout does not have a new value
		cout << "\n\nName: " << name << endl;
		cout << "Health = " << health << endl;
		cout << "Power = " << powerLevel << endl;
		cout << "Attack Damage = " << attackDamage << endl;


	}// Ending scope operator, this end a block of code.
	//else (when false) will display regular values
	else 
	{//Starting scope operator, this starts a code block
		//couts will display original values
		cout << "\nHealth = " << health << endl;
		cout << "Power = " << powerLevel << endl;
		cout << "Attack Damage = " << attackDamage << endl;



	}// Ending scope operator, this end a block of code.
	//if created (when true) will take away the sorcerers conjure power
	if (conAndCrit)
	{//Starting scope operator, this starts a code block

		
		cout << "\nSetting Critical Damage to 0....";
		//variable with new crit damage
		criticalDamage = 0;
		//cout displaying new crit damage
		cout << "\nCritical Damage = " << criticalDamage << endl;
		//cout displaying cannot use conjure power
		cout << "\nThis sorcerer may no longer conjure power from " << conjurePower << endl;

	}// Ending scope operator, this end a block of code.
	//else (when false) will display original conjurePower
	else
	{//Starting scope operator, this starts a code block

		cout << "\nCritical Damage = " << criticalDamage << endl;
		//cout will display same conjure power but can use it
		cout << "This sorcerer can still conjure power from " << conjurePower << endl;
		

	}// Ending scope operator, this end a block of code.


	

}// Ending scope operator, this end a block of code.






