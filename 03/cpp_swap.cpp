#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string	stringA("(null)");
	string	stringB("(null)");
	string	stringTmp("(null)");
	int		a(0);
	int		b(0);
	int		tmp(0);

	cout << "Enter the first value (integer) : ";
	cin >> a;
	cout << ", Then enter the second (int): ";
	cin >> b;
	cin.ignore(); // ignoring to be able to use getline.
	tmp = a;
	a = b;
	b = tmp;
	cout << endl << "Now, a is : " << a << ", and b is : " << b << '.' << endl;
	cout << "Time to swap strings !" << endl;
	cout << "The first one : ";
	getline(cin, stringA);
	cout << endl << "Then, the second : ";
	getline(cin, stringB);
	stringTmp = stringA;
	stringA = stringB;
	stringB = stringTmp;
	cout << endl << "Here is your swapped sentences : " << endl;
	cout << "The A : " << stringA << endl << "The B : " << stringB << endl;
	return (0);
}
