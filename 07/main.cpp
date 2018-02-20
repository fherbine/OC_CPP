#include <iostream> // Interactions with the console
#include <fstream>  // Interactions with files
#include <string>

using namespace std;

int main(void)
{
	string		pathName("./");

	cout << "File path: ";
	getline(cin, pathName);
	ofstream	path(pathName);
	cout << "PATH: " << pathName << endl;
	return (0);
}
