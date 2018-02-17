#include "header.h"

/*
 * Main file containing main() function
 */

using namespace std;

int			main(void)
{
	string	name("(undefined)");

	cout << "What's your name ?" << endl << "$> ";
	getline(cin, name);
	cin.ignore();
	display_name(name);
	return (0);
}
