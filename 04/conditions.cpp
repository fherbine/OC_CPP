#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int		ageUser(0);
	string	fullName("(undefined)");
	string	username("(undefined)");
	bool	newQuestion(false);

	cout << "Hey new user !" << endl << "Choose a username : ";
	cin >> username;
	cin.ignore();
	cout << "Ok, " << username << ". Hmm... but, between us ..." << endl;
	cout << "What's your real name : ";
	getline(cin, fullName);
	cout << "Ok, " << fullName;
	cout << " ! Then let me know more about you, how old are you ?";
	cout << endl;
	cin >> ageUser;
	while (true)
	{
		if (newQuestion)
		{
			cout << "How old are you again : ";
			cin >> ageUser;
		}
		cout << endl;
		if (ageUser < 0 || ageUser > 130)
			cout << "How is it possible !";
		else if (ageUser >= 0 && ageUser < 6)
			cout << "Too young to read this answer ... ;)";
		else if (ageUser >= 6 && ageUser < 13)
			cout << "Already a children ! Be patient ;)";
		else if (ageUser >= 13 && ageUser < 18)
			cout << "It's almost done !!";
		else if (ageUser >= 18 && ageUser < 21)
			cout << "You're an adult in (almost) all the country in the world";
		else if (ageUser == 21)
			cout << "You're now a true adult in the US. Bit late isn't it ?";
		else if (ageUser != 42)
			cout << "Hi, gentleman / gentlewoman ! :p";
		else
		{
			cout << "What a wonderful age !" << endl;
			break ;
		}
		cout << endl;
		newQuestion = true;
	}
	return (0);
}
