#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int				main(void)
{
	string		pathName("./");
	string		tmp("");

	cout << "In this program, you will append text at the end of a file of ";
	cout << "your choice !" << endl << endl;
	cout << "What's the file do you want to open : ";
	getline(cin, pathName);
	ofstream	file(pathName, ios::app);
	if (file)
	{
		cout << "What do you want to write ?" << endl << "$> ";
		getline(cin, tmp);
		file << tmp << endl;
	}
	else
		cout << "\033[1;31;40mError :\033[0m can't open the file !" << endl;
	return (0);
}
