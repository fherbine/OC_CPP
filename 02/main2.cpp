#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int variableToDisplay(42);

	string answer("And the answer to the universe is : ");

	bool really(true);

	cout << answer << variableToDisplay << endl;
	cout << "That's " << really << " (means \"true\"), Billy !" << endl;
	return (0);
}
