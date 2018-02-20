#include <iostream> // Interactions with the console
#include <fstream>  // Interactions with files
#include <string>

using namespace std;

int main(void)
{
	ofstream	path("./"); // default path > current directory
	string		pathName("./");

	cout << "File path: ";
	getline(cin, pathName);
	cout << "PATH: " << pathName << endl;
	return (0);
}
