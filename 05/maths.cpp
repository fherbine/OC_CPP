/*
	A small lib maths copy
*/

#include <iostream>
#include <string>

using namespace std;

int fh_fabs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

int fh_pow(int n, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (fh_pow(n, power - 1) * n);
}

string fname(int value)
{
	if (value == 1)
		return ("fh_fabs();");
	else if (value == 2)
		return ("fh_pow();");
	else
		return ("(unknown)");
}

int main(void)
{
	int		choice(0), n1(0), n2(0), result(0);
	string	userName("(undefined)");

	cout << "Please, enter your entire name :";
	getline(cin, userName);
	cout << endl << "mmhh ok, " << userName << " ..." << endl;
	cout << "Then, select the function to use !" << endl;
	cout << "1. fabs" << endl << "2. pow" << endl;
	cin >> choice;
	cout << "Enter a number : ";
	cin >> n1;
	if (choice == 1)
		result = fh_fabs(n1);
	else if (choice == 2)
	{
		cout << "Enter a second one : ";
		cin >> n2;
		result = fh_pow(n1, n2);
	}
	else
		cout << "Sorry I didn't understand ! :/";
	if (choice == 1 || choice == 2)
		cout << "Here is the result : " << result << " from " << fname(choice);
	cout << endl;
	return (0);
}
