#include <iostream> // Interactions with the console
#include <fstream>  // Interactions with files
#include <string>

using namespace std;

int main(void)
{
	string		pathName("./");
	string		tmp("");

	cout << "File path: ";
	getline(cin, pathName);
	cout << "PATH_TO_OPEN: " << pathName << endl;
	ofstream	path(pathName.c_str());
	if (path)
	{
		cout << "What do you want to write in this file ?" << endl << "$> ";
		getline(cin, tmp);
		path << tmp << endl;
		path << "OK - Exiting ..." << endl;
	}
	else
	{
		cout << "\033[1;31;40mError :\033[0m program failed to open: ";
		cout << pathName << endl;
	}
	return (0);
}
