#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int		userAge(0);
	string	username("(null)");

	cout << "How old are you ? ";
	cin >> userAge;
	cout << "So you are " << userAge << " years old !" << endl;
	cout << "And, ...Hum ..." << endl;
	cout << "What's your name ? ";
	cin >> username;
	cout << "You are " << username << " !" << endl;
	return (0);
}
