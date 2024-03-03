#include <iostream>
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Include sorcerer header file to utilize variables
#include "sorcerer.h"
//Include support header file to utilize variables
#include "support.h"
//Include wizard header file to utilize variables
#include "wizards.h"
//Included windows header file to utilize the pause and cls commands
#include "windows.h"
//Included for pointers
#include <memory>
//Utilizing this allows us to not have to put std on every line
using namespace std;

//This function is for wizards
void wizard();
//This function is for sorcerers
void sorcerers();
//This function is for supports
void supports();

//function for first fight
void firstFight();
//function for second fight
void secondFight();
//function for third fight
void thirdFight();
//function for fourth fight
void fourthFight();



//These are string function for user choice
string getUserChoice();
string getUserChoice2();
string getUserChoice3();

//String function for looping game or ending
std::string userQuestionPlayAgain();

//Main function
int main()
{ //Starting scope operator, this starts a code block

	//string variable for user choice
	std::string userChoice;

	//Three cout for introduction of the program
	cout << "\t\t *** Wizards vs. Sorcerers ***";
	cout << "\n\nWelcome player! \nThis is a teaser for a future game that is currently in the works. \n\nWhat list would you like to see first?";


	//Call the string function for getting user choice
	userChoice = getUserChoice();

	//return 0 because main returns an int
	return 0;
} // Ending scope operator, this end a block of code.


//Function for supports
void supports()
{ //Starting scope operator, this starts a code block
	//string variable for user choice
	string userChoice2;
	//Clears screen so it is not jumbled up with information
	system("cls");


	//Weak pointer created for items
	weak_ptr<supportStuff> weakSupportItems;
	//cout will display if weak pointer is pointing to share pointers.
	cout << "\n\nWeak pointer for items created (1 for True, 0 for False): " << weakSupportItems.expired() <<  endl;

	//Created our shared pointer for the items
	auto supportItems = make_shared<supportStuff>();

	//call class support 
	support c1("Xavier", 50, 30, 5, 25, 15, "Paladin");
	//calls method for support 1
	c1.display();

	cout << "\n****************************************************" << endl;

	//call class support 
	support c2("Jimothy", 100, 35, 5, 25, 15, "Cleric");
	//calls method for support 2
	c2.display();

	cout << "\n\nItems that both supports can utilize:" << endl;
	//cout will display all shared pointers.
	cout << "\n" << supportItems.get()->supItem1 << "\n" << supportItems.get()->supItem2 << "\n" << supportItems.get()->supItem3 << endl;

	//Weak pointer assigned
	weakSupportItems = supportItems;
	//cout will display if weak pointer is pointing to share pointers.
	cout << "\n\nWeak pointer for items created (1 for True, 0 for False): " << weakSupportItems.expired() << ". \nItems will leave scope after choice is made." << endl;

	cout << "\nNOTE: Supports cannot be chosen until full release.";
	//call the string function
	userChoice2 = getUserChoice2();

	//This will throw away ALL pointers in this function.
	return;
} // Ending scope operator, this end a block of code.

// Function that stores all wizard values
void wizard()
{ //Starting scope operator, this starts a code block
	//string variable for user choice
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Weak pointers created for items and spells
	weak_ptr<wizardStuff> weakWizardItems;
	weak_ptr<wizardStuff> weakWizardSpells;
	//cout will display if weak pointer is pointing to share pointers.
	cout << "\n\nWeak pointers for items and spells created (1 for True, 0 for False): " << weakWizardItems.expired() << " and " << weakWizardSpells.expired() << endl;

	//Created 2 shared pointers for items and spells
	auto wizardItems = make_shared<wizardStuff>();
	auto wizardSpells = make_shared<wizardStuff>();

	//Our unique pointer for the names.					0		  1
	unique_ptr<string[]>wizardNames(new string[2]{ "Kalimvor", "Kelter" });

	//string variable for user choice
	string userChoice2;

	cout << "\n\nWizards:" << endl;
	// call class for wizards with all respected data
	wizards w1("Kalimvor of Time", 500, 1000, 100, 120, "Chronurgy", "Arcane Abeyance", 75);
	// calls method for wizard 1 
	w1.display();
	cout << "\nKalimvor is the Grand Wizard of Time. With his power he can bend the flow of time; reversing his enemies attacks and changing the state of the battlefield.\n" << endl;

	//couts utilizing shared and unique pointers.
	cout << "\nSpells that can be casted by " << wizardNames.get()[0] << ": " << wizardSpells.get()->wSpell << " and " << wizardSpells.get()->wSpell2 << endl;
	cout << "\nItems best matched with this Wizard: " << wizardItems.get()->wItem << " and " << wizardItems.get()->wItem3 << endl;

	cout << "\n****************************************************" << endl;
	
	//think of character like declaring an integer
	// call class for wizards with all respected data
	wizards w2("Kelter of the Undead", 250, 120, 100, 120, "Necromancer", "Command Undead", 100);
	// calls method for wizard 2 
	w2.display();

	cout << "Kelter is a wizard of the undead. With his power he can make the dead rise and use them to fight off his enemies in the battlefield.\n" << endl;


	//cout utilizing shared and unique pointers.
	cout << "\nSpells that can be casted by " << wizardNames.get()[1] << ": " << wizardSpells.get()->wSpell3 << " and " << wizardSpells.get()->wSpell4 << endl;
	cout << "\nItems best matched with this Wizard: " << wizardItems.get()->wItem2 << " and " << wizardItems.get()->wItem4 << endl;


	cout << "\n\nATTENTION: Let it be known that all items and spells are not usable in the simulation arena. They can be accessed when the full game is released." << endl;

	//Weak pointers are now pointing to shared pointers,
	weakWizardItems = wizardItems;
	weakWizardSpells = wizardSpells;
	//Cout will display if weak pointers are expired or not
	cout << "\n\nWeak pointers for items and spells expired? (1 for True, 0 for False): " << weakWizardItems.expired() << " and " << weakWizardSpells.expired() << ". \nItems and Spells will leave scope when a choice is made." << endl;

	//call the string function
	userChoice2 = getUserChoice2();
	



	//This will throw away ALL pointers in this function.
	return;
} // Ending scope operator, this end a block of code.


//function that stores all sorcerer value
void sorcerers()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Weak pointers created for items and spells
	weak_ptr<sorcererStuff> weakSorcererItems;
	weak_ptr<sorcererStuff> weakSorcererSpells;

	//cout will display if weak pointer is pointing to share pointers.
	cout << "\n\nWeak pointers for items and spells created (1 for True, 0 for False): " << weakSorcererItems.expired() << " and " << weakSorcererSpells.expired() << endl;

	//Created 2 shared pointers for items and spells
	auto sorcererItems = make_shared<sorcererStuff>();
	auto sorcererSpells = make_shared<sorcererStuff>();

	//Our unique pointer for the names.				     0			1
	unique_ptr<string[]>sorcererNames(new string[2]{ "Arther", "Dr. Strange" });

	//string for user choice value
	string userChoice2;

	//cout display
	cout << "\nSorcerers" << endl;

	// call class of sorcerer with all respected values
	sorcerer s1("Arther of the Lost", 250, 150, 120, 75, "The School of Magic", "Cursed Magic", "Spirits");
	// will display s1 values
	s1.display();

	cout << "\nArther of the Lost is a sorcerer that studied Curse Magic. His concentration lead him down a dark path of evil sorcerery. He was exiled from his school and now uses his magic to curse his enemies.\n";
	//couts utilizing shared and unique pointers.
	cout << "\nSpells that can be casted by " << sorcererNames.get()[0] << ": " << sorcererSpells.get()->Spell << " and " << sorcererSpells.get()->Spell2 << endl;
	cout << "\nItems best matched with this Sorcerer: " << sorcererItems.get()->sItem << " and " << sorcererItems.get()->sItem2 << endl;


	cout << "\n****************************************************" << endl;


	// call class of sorcerer with all respected values
	sorcerer s2("Dr. Strange: The Sorcerer Supreme", 250, 500, 110, 100, "The Temple of Kamar-Taj", "Mystic Arts", "The Darkhold");
	//will display s2 values
	s2.display();

	cout << "\nThough he was once a neurosurgeon, after losing his dearly beloved Christina; in his decent to darkenss Dr. Strange became the almighty powerful Supreme Sorcerer. He is the beholder of the time stone and a great rival to Kalimvor of Time.";
	//couts utilizing shared and unique pointers.
	cout << "\n\nSpells that can be casted by " << sorcererNames.get()[1] << ": " << sorcererSpells.get()->Spell3 << " and " << sorcererSpells.get()->Spell4 << endl;
	cout << "\nItems best matched with this Sorcerer: " << sorcererItems.get()->sItem3 << " and " << sorcererItems.get()->sItem4 << endl;


	cout << "\n\nATTENTION: Let it be known that all items and spells are not usable in the simulation arena. They can be accessed when the full game is released." << endl;

	//Weak pointers are now pointing to shared pointers
	weakSorcererItems = sorcererItems;
	weakSorcererSpells = sorcererSpells;

	//Cout will display if weak pointers are expired or not
	cout << "\n\nWeak pointers for items and spells expired? (1 for True, 0 for False): " << weakSorcererItems.expired() << " and " << weakSorcererSpells.expired() << ". \nItems and Spells will leave scope when a choice is made." << endl;


	//call the string function
	userChoice2 = getUserChoice2();

	//This will throw away ALL pointers in this function.
	return;
} // Ending scope operator, this end a block of code.

//Function for first fight
void firstFight()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");

	cout << "\nYou chose: \n\n";

	// call class for wizards with all respected data
	wizards w1("Kalimvor of Time", 500, 1000, 100, 120, "Chronurgy", "Arcane Abeyance", 75);
	// calls method for wizard 1 
	w1.display();



	std::cout << "\nHere is a training simulator, your opponent will not fight back.  \n\nYou will be fighting Dr. Strange.";

	// call class of sorcerer with all respected values
	sorcerer s2("Dr. Strange: The Sorcerer Supreme", 250, 500, 110, 100, "The Temple of Kamar-Taj", "Mystic Arts", "The Darkhold");
	//will display s2 new values
	s2.display(true, true);
	
	//Pauses screen so user can read the screen
	system("pause");
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Title for the scene
	cout << "\nWelcome to the simulation arena. Kalimvor of Time VS Dr. Strange.....\n\n";
	//Pauses screen so user can read the screen
	system("pause");

	// all five couts are dialogue
	cout << "\nFIGHT!\n";
	cout << "\n\nWith no hesitation, Kalimvor begins to draw power from the universe. He knows his rival is powerless in the simulation arena, so he takes this advantage to humiliate him.\nAs he draws more and more power, Dr. Strange begins realizes how powerless he is here.\n" << endl;
	cout << "\n\"I have waited too long for this Strange.\"" << endl;
	cout << "\nKalimvor extends his hand to Dr. Strange. In a torturing move, Kalimvor speeds up the flow of time around him then reverses it consistently putting Dr. Strange through unimaginable pain.\n\nKalimvor, after several minutes, ends Dr. Strange's torturing and withers him away in time." << endl;
	cout << "\n\nDr. Strange has been defeated.";

	// call class of sorcerer with all 0 values, but will not display. Instead Character has expired will display.
	sorcerer ("Dr. Strange: The Sorcerer Supreme", 0, 0, 0, 0, "The Temple of Kamar-Taj", "Mystic Arts", "The Darkhold");
	
	// READ WHEN YOU GET BACK. DO NOT PUT THE DISPLAY, JUST ENTER THE NAME AND SUCH AND JUST LET IT DO ITS THING

	cout << "\n\nKalimvor is the victor.";

	//string for user choice value
	string userQuestion;
	//call our string function for looping game
	userQuestion = userQuestionPlayAgain();



}// Ending scope operator, this end a block of code.
//Function for the second fight
void secondFight()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");

	cout << "\nYou chose: \n\n";

	// call class for wizards with all respected data
	wizards w2("Kelter of the Undead", 250, 120, 100, 120, "Necromancer", "Command Undead", 100);
	// calls method for wizard 2 
	w2.display();

	std::cout << "\nHere is a training simulator, your opponent will not fight back.  \n\nYou will be fighting Arther of the Lost.";

	// call class of sorcerer with all respected values
	sorcerer s1("Arther of the Lost", 250, 150, 120, 75, "The School of Magic", "Cursed Magic", "Spirits");
	// will display s1 values
	s1.display(true, true);


	//Pauses screen so user can read the screen
	system("pause");
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Title for the scene
	cout << "\nWelcome to the simulation arena. Kelter of the Undead VS Arther of the Lost.....\n\n";
	//Pauses screen so user can read the screen
	system("pause");

	//The next six couts are all part of the scene
	cout << "\nFIGHT!\n";
	cout << "\n\"Don't take this personal Arther.\" Kelter brings out his staff slamming the base onto the ground. The arena grows dark as undead creatures begin to rise.";
	cout << "\n\"Kelter you don't have to do this.\" Arther exclaims, \"We can fi-\". The undead swarm Arther.";
	cout << "\n\nAs Arther screams and fights, he is taken over by the undead......\nAfter the dead are finished feasting, Arther lies defeated.";
	cout << "\n\nKelter scoffs: \"You were always weak brother.\"";
	cout << "\n\nArther of the Lost has been defeated.";

	// call class of sorcerer with values of 0 , but will not display. Instead Character has expired will display.
	sorcerer ("Arther of the Lost", 0, 0, 0, 0, "The School of Magic", "Cursed Magic", "Spirits");

	cout << "\n\nKelter of the Undead is the victor.";

	//string for user choice value
	string userQuestion;
	//call our string function for looping game
	userQuestion = userQuestionPlayAgain();

}// Ending scope operator, this end a block of code.
//function for third fight scene
void thirdFight()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");

	cout << "\nYou chose: \n\n";

	// call class of sorcerer with all respected values
	sorcerer s1("Arther of the Lost", 250, 150, 120, 75, "The School of Magic", "Cursed Magic", "Spirits");
	// will display s1 values
	s1.display();

	std::cout << "\nHere is a training simulator, the opponent will not fight back.  \n\nYour chosen character will showcase his power.";

	// call class for wizards with all respected data
	wizards w2("Kelter of the Undead", 250, 120, 100, 120, "Necromancer", "Command Undead", 100);
	// calls method for wizard 2 
	w2.display(true, true);

	//Pauses screen so user can read the screen
	system("pause");
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Title for the scene
	cout << "\nWelcome to the simulation arena. Arther of the Lost VS Kelter of the Undead.....\n\n";
	//Pauses screen so user can read the screen
	system("pause");

	// all six couts are part of the scene
	cout << "\nFIGHT!\n";
	cout << "\n\"Kelter brother, I have waited for this day.\" Arther takes advantage of Kelter having no power. He begins to levitate, eyes glowing and conjuring power from The Spirit Realm. The arena fills with souls of past warriors and of the damned; all lives taken and used by Kelter.";
	cout << "\n\n\"I may fear death, but I will never fear you, you mere child\", Kelter exclaims. Suddenly Kelter is met with the face of the past warriors and poor souls he has used in battle. \"A cowardly move I see.\"";
	cout << "\nWith the souls angry and ready to kill, they swarm Kelter, beating him until he is left a bloody mess. The souls can now rest, knowing their previous soulkeeper is now deceased.";
	cout << "\n\nArther returns to the ground and steps toward Kelters body, \"Father would have been proud if we fought together....\"";
	cout << "\n\nKelter of the Undead has been defeated";

	// call class for wizards with values of 0, but will not display. Instead Character has expired will display.
	wizards ("Kelter of the Undead", 0, 0, 0, 0, "Necromancer", "Command Undead", 0);

	cout << "\n\nArther of the Lost is the victor.";

	//string for user choice value
	string userQuestion;
	//call our string function for looping game
	userQuestion = userQuestionPlayAgain();

}// Ending scope operator, this end a block of code.
//function for fourth fight scene
void fourthFight()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");

	cout << "\nYou chose: \n\n";

	// call class of sorcerer with all respected values
	sorcerer s2("Dr. Strange: The Sorcerer Supreme", 250, 500, 110, 100, "The Temple of Kamar-Taj", "Mystic Arts", "The Darkhold");
	//will display s2 new values
	s2.display();

	std::cout << "\nHere is a training simulator, the opponent will not fight back.  \n\nYour chosen character will showcase his power." << endl;

	// call class for wizards with all respected data
	wizards w1("Kalimvor of Time", 500, 1000, 100, 120, "Chronurgy", "Arcane Abeyance", 75);
	// calls method for wizard 1 
	w1.display(true, true);

	//Pauses screen so user can read the screen
	system("pause");
	//Clears screen so it is not jumbled up with information
	system("cls");

	cout << "\nWelcome to the simulation arena. Kalimvor of Time VS Dr. Strange.....\n\n";
	//Pauses screen so user can read the screen
	system("pause");

	//The next seven couts are all part of the scene
	cout << "\nFIGHT!\n";
	cout << "\n\"Oh Kalimvor, I will enjoy this.\" Strange begins to conjure his power, summoning creatures from The Dark Dimension. \"Ya know I've seen what you did to me in this arena, what I will put you through will have you begging for mercy.\" ";
	cout << "\n\nThe Mythical Hydra wraps its tenticle around Kalimvor, \"What is it you speak of? I've never step foot in this arena.\" Strange laughs, \"Guess you're not as powerful as you think.\"";
	cout << "\n\nStrange's third eye opens, slowly transforming into his demonic self. He extends his hand to Kalimvor, rising him into the air. \"Your power is mine.\" He begins to drain Kalimvors power and life force as slowly as possible, putting Kalimvor in more pain than ever imagined.";
	cout << "\n\nWhen finished, Kalimvor's skeleton drops onto the arena. But the torture isn't finished. Strange reverses time on Kalimvor's body bringing him back to life. \"What is this?\" Kalimvor says.\n\"Told you I'd have you begging for mercy.\"";
	cout << "\n\nJust as Kalimvor did in the other battle, Strange entraps Kalimvor in a time bubble. Simultaneously, Kalimvor's life is sped up and reversed. Months go by, \"Guess you've had enough.\" \nStrange ends Kalimvor.";
	cout << "\n\nKalimvor has been defeated."; 

	// call class for wizards with new 0 values, but will not display. Instead Character has expired will display.
	wizards ("Kalimvor of Time", 0, 0, 0, 0, "Chronurgy", "Arcane Abeyance", 0);

	cout << "\n\nDr. Strange is the victor.";

	//string for user choice value
	string userQuestion;
	//call our string function for looping game
	userQuestion = userQuestionPlayAgain();

}// Ending scope operator, this end a block of code.




// string function created for user choice
std::string getUserChoice()
{ //Starting scope operator, this starts a code block
	//string for user choice
	string userChoice;

	cout << "\n\nYour choices are: \n\nWizards \nSorcerers \nSupport";

	//cout for question
	cout << "\n\nWhat would you like to see? ";
	//getline will get users choice and store it here and display
	getline(std::cin, userChoice);

	//if created for wizard choice
	if (userChoice == "Wizards" || userChoice == "Wizard" || userChoice == "wizards" || userChoice == "wizard")
	{ //Starting scope operator, this starts a code block
		//call wizard function
		wizard();
	} // Ending scope operator, this end a block of code.
	// else if for sorcerer choice
	else if (userChoice == "Sorcerers" || userChoice == "Sorcerer" || userChoice == "sorcerers" || userChoice == "sorcerer")
	{ //Starting scope operator, this starts a code block
		//call sorcerer function
		sorcerers();
	} // Ending scope operator, this end a block of code.
	// else if for support choice
	else if (userChoice == "Supports" || userChoice == "Support" || userChoice == "supports" || userChoice == "support")
	{ //Starting scope operator, this starts a code block
		//call support function
		supports();
	} // Ending scope operator, this end a block of code.
	// catch all if user does not make a choice
	else
	{ //Starting scope operator, this starts a code block
		//string for user choice
		string userChoice;
		cout << "\nInvalid Response, please try again or check spelling.";
		//call our function
		userChoice = getUserChoice();

	}// Ending scope operator, this end a block of code.

	
	//return userchoice value
	return userChoice;
} // Ending scope operator, this end a block of code.

//string function for second user choice
std::string getUserChoice2()
{//Starting scope operator, this starts a code block
	//string for user choice value
	string userChoice2;

	cout << "\n\nAre you ready to choose your character? (Yes or No) ";
	//getline for user inpt
	getline(std::cin, userChoice2);
	//if created for yes
	if (userChoice2 == "Yes" || userChoice2 == "yes" || userChoice2 == "Y" || userChoice2 == "y")
	{//Starting scope operator, this starts a code block
	
		//string for user choice value
		string userChoice3;
		//Call the third user choice
		userChoice3 = getUserChoice3();

	}// Ending scope operator, this end a block of code.
	//else if for user choice no
	else if (userChoice2 == "No" || userChoice2 == "no" || userChoice2 == "N" || userChoice2 == "n")
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice;
		//Call the first user Choice
		userChoice = getUserChoice();

	}// Ending scope operator, this end a block of code.
	//catch all if no user input or invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice2;

		cout << "\nYou must choose!";
		//Call back the getUserChoice2 function
		userChoice2 = getUserChoice2();
	}// Ending scope operator, this end a block of code.

	//return the value of userChoice2
	return userChoice2;

}// Ending scope operator, this end a block of code.

//string function for user choice
std::string getUserChoice3()
{//Starting scope operator, this starts a code block

	

	//clears the screen for better UX
	system("cls");
	//string for user choice value
	string userChoice3;

	//couts display user choices and question
	cout << "\nAwesome!";
	cout << "\n\nWizards: \nKalimvor of Time \nKelter of the Undead";
	cout << "\n\nSorcerers: \nArther of the Lost \nDr. Strange: The Sorcerer Supreme";
	
	cout << "\n\nWho would you like to play as? (Be sure to spell the name correctly) ";
	//get line for user input
	getline(std::cin, userChoice3);
	//if created for choice 1
	if (userChoice3 == "Kalimvor of Time" || userChoice3 == "kalimvor of time" || userChoice3 == "Kalimvor" || userChoice3 == "kalimvor")
	{//Starting scope operator, this starts a code block
		//call our function
		firstFight();

	}// Ending scope operator, this end a block of code.
	//else if created for choice 2
	else if (userChoice3 == "Kelter of the Undead" || userChoice3 == "kelter of the undead" || userChoice3 == "Kelter" || userChoice3 == "kelter")
	{//Starting scope operator, this starts a code block
		//call our function
		secondFight();

	}// Ending scope operator, this end a block of code.
	//else if created for choice 3
	else if (userChoice3 == "Arther of the Lost" || userChoice3 == "arther of the lost" || userChoice3 == "Arther" || userChoice3 == "arther")
	{//Starting scope operator, this starts a code block
		//call our function
		thirdFight();

	}// Ending scope operator, this end a block of code.
	//else if created for choice 4
	else if (userChoice3 == "Dr. Strange" || userChoice3 == "dr. strange" || userChoice3 == "Dr Strange" || userChoice3 == "dr strange")
	{//Starting scope operator, this starts a code block
		//call our function
		fourthFight();

	}// Ending scope operator, this end a block of code.
	//catch all for invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice3;
		
		//call our string function
		userChoice3 = getUserChoice3();

	}// Ending scope operator, this end a block of code.


	//return the value of userChoice 3
	return userChoice3;
}// Ending scope operator, this end a block of code.

//String function for looping the game
std::string userQuestionPlayAgain()
{//Starting scope operator, this starts a code block
	//string for user choice value
	string userQuestion;

	cout << "\n\nWould you like to play again? (Yes or No) ";
	//getline for user input 
	getline(std::cin, userQuestion);
	//if created for yes
	if (userQuestion == "Yes" || userQuestion == "yes" || userQuestion == "Y" || userQuestion == "y")
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice3;
		//call our string function
		userChoice3 = getUserChoice3();


	}// Ending scope operator, this end a block of code.
	//else if created for No
	else if (userQuestion == "No" || userQuestion == "no" || userQuestion == "N" || userQuestion == "n")
	{//Starting scope operator, this starts a code block
		//exit function ends the game
		exit(0); 

	}// Ending scope operator, this end a block of code.
	//catch all for invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userQuestion;

		cout << "\nYou must choose!";
		//call our string function
		userQuestion = userQuestionPlayAgain();
	}// Ending scope operator, this end a block of code.

	//return the value of the userQuestion
	return userQuestion;
}// Ending scope operator, this end a block of code.




//Abstract cannot be instantiated 
// meaning you cannot have a


//Add another choice function for player to choose character of their liking.
//We do not have the knowledge to build a fighting game just yet.

// Update ideas:
/*
	Make actual game and add spells and health aids
	For Abstract: Just add to base class
	For Encapsulation: 
	For Polymorphism:



*/