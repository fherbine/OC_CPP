#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string thisIsATest("(null)");
	string thisIsATestAgain("(null)");

	cout << "Type 'two words' : ";
	cin >> thisIsATest;
	cin.ignore(); // ignore the last 'cin' to do getline()
	cout << "Output : " << thisIsATest << " as you can see it failed ! :( ...";
	cout << endl;
	cout << "Try Again !" << endl;
	getline(cin, thisIsATestAgain); // same as cin >> , but it can take 2 words
	cout << "Output : " << thisIsATestAgain << " then that's good, you succeed ! ;)";
	cout << endl << "Edit the file 'main2.cpp' to see what happened" << endl;
	return (0);
}
