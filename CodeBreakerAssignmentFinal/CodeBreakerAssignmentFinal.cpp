// CodeBreakerAssignmentFinal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{ "GameOn","Our first assignment" },
		{ "Turtle","The aquatic equvilent of a snail" },
		{ "Train","A bus on rails" },
		{ "Pigeon","The land equivilent of Seagulls" },
		{ "Tree","Plants that Arizona has few of." },
		{ "Ocean","Worlds largest and most diverse fish tank." },
		{ "Light","The thing everyone sees at the end of tunnels." },
		{ "Code","The thing that makes this game work." },
		{ "Bread","If you slice it you have mans best invention apparently." },
		{ "School","The place this code was made at." },
	};
	//word 1
	srand(static_cast<unsigned int>(time(0)));
	int choice1 = (rand() % NUM_WORDS);
	string theWord1 = WORDS[choice1][WORD];  // word that is being guessed
	string theHint1 = WORDS[choice1][HINT];  // hint for the word

	string jumble1 = theWord1;
	int length1 = jumble1.size();
	for (int i1 = 0; i1 < length1; ++i1)
	{
		int index1 = (rand() % length1);
		int index2 = (rand() % length1);
		char temp1 = jumble1[index1];
		jumble1[index1] = jumble1[index2];
		jumble1[index2] = temp1;
	}
		
	

	cout << "\t\t\tWelcome to Code Breaker Simulation.\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'Hint' for a hint.\n";
	cout << "Enter 'Skip' to skip the Word.\n\n";
	cout << "The word to unscramble is: " << jumble1;
	
		string guess1;
	cout << "\n\nYour Guess: ";
	cin >> guess1;

	while ((guess1 != theWord1) && (guess1 != "Skip")) {
		if (guess1 == "Hint") {
			cout << theHint1;
		}
		else {
			cout << "Your guess is incorrect";
		}
		cout << "\n\nYour Guess: ";
		cin >> guess1;
	}
	if (guess1 == theWord1) {
		cout << "\nYour guess was correct.\n";
	}
	cout << "\nGood job breaking the code.\n\n";


	//word 2
	srand(static_cast<unsigned int>(time(0)));
	int choice2 = (rand() % NUM_WORDS);
	string theWord2 = WORDS[choice2][WORD];  // word that is being guessed
	string theHint2 = WORDS[choice2][HINT];  // hint for the word

	string jumble2 = theWord2;
	int length2 = jumble2.size();
	for (int i2 = 0; i2 < length2; ++i2)
	{
		int index3 = (rand() % length2);
		int index4 = (rand() % length2);
		char temp2 = jumble2[index3];
		jumble2[index3] = jumble2[index4];
		jumble2[index4] = temp2;
	}
	
	
	//Start guessing the second word
	cout << "The next word to unscramble is: " << jumble2;

	string guess2;
	cout << "\n\nYour Guess: ";
	cin >> guess2;

	while ((guess2 != theWord2) && (guess2 != "Skip")) {
		if (guess2 == "Hint") {
			cout << theHint2;
		}
		else {
			cout << "Your guess is incorrect";
		}
		cout << "\n\nYour Guess: ";
		cin >> guess2;
	}
	if (guess2 == theWord2) {
		cout << "\nYour guess was correct.\n";
	}
	cout << "\nGood job breaking the code.\n\n";



		//word 3
	srand(static_cast<unsigned int>(time(0)));
	int choice3 = (rand() % NUM_WORDS);
	string theWord3 = WORDS[choice3][WORD];  // word that is being guessed
	string theHint3 = WORDS[choice3][HINT];  // hint for the word

	string jumble3 = theWord3;
	int length3 = jumble3.size();
	for (int i3 = 0; i3 < length3; ++i3)
	{
		int index5 = (rand() % length3);
		int index6 = (rand() % length3);
		char temp3 = jumble3[index5];
		jumble3[index5] = jumble3[index6];
		jumble3[index6] = temp3;
	}

	//Guess the final word
	cout << "The final word to unscramble is: " << jumble3;

	string guess3;
	cout << "\n\nYour Guess: ";
	cin >> guess3;

	while ((guess3 != theWord3) && (guess3 != "Skip")) {
		if (guess3 == "Hint") {
			cout << theHint3;
		}
		else {
			cout << "Your guess is incorrect";
		}
		cout << "\n\nYour Guess: ";
		cin >> guess3;
	}
	if (guess3 == theWord3) {
		cout << "\nYour guess was correct.\n";
	}
	cout << "\nGood job breaking the code.\n\n";


}
