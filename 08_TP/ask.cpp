#include "header.h"

/*
 *  Ask.cpp file to display question to the user
 */

using namespace std;

string	askForTheOriginalWord(void)
{
	string	answer("");

	cout << "Type a word: ";
	getline(cin, answer);
	return (answer);
}

string	askForAnAnswer(string shuffledWord)
{
	string	aTry("");

	cout << "What's that word ? " << shuffledWord << endl;
	getline(cin, aTry);
	return (aTry);
}
