#include "header.h"

using namespace std;

void	mystery(void)
{
	string	answer("");
	string	shfl("");

	answer = askForTheOriginalWord();
	shfl = shuffleWord(answer);
	while (1)
	{
		if (askForAnAnswer(shfl) == answer)
		{
			cout << "Congratulations, you've won !" << endl;
			break;
		}
		cout << "Ummm.. Diantre you've lost, try again!" << endl;
	}
}
