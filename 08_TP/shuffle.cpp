#include "header.h"

using namespace std;

string shuffleWord(string word)
{
	string	cp("");
	string	shuffled("");
	int		position(0);
	int		max(shuffleWord.size());

	srand(time(0));

	cp += word;
	shuffled += word;
	for (int i(0); i < max; ++i)
	{
		position = rand() % cp.size();
		shuffled[i] = cp[position];
		cp.erase(position, 1);
	}
	return (shuffled);
}
