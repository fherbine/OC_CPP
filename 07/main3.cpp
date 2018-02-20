#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	string	fname("./");
	string	tmp("");
	char	a;
	string	word;
	string	line;

	cout << "file path: ";
	getline(cin, fname);
	ofstream file_w(fname.c_str(), ios::app);
	if (file_w)
	{
		cout << "Write some words : " << endl << "$> ";
		getline(cin, tmp);
		file_w << tmp << endl;
		ifstream file_r(fname);
		if (file_r)
		{
			while (file_r.get(a))
				cout << a << endl;
			ifstream file_r2(fname);
			while (file_r2 >> word)
				cout << word << endl;
			// file_r.ignore(); // useless
			ifstream file_r3(fname);
			while (getline(file_r3, line))
				cout << line << endl;
		}
		else
			cout << "\033[1;31;40mError :\033[0m Can't read the file !" << endl;
	}
	else
		cout << "\033[1;31;40mError :\033[0m Can't open the file !" << endl;
	return (0);
}
