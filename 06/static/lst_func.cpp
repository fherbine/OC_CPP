#include "header.h"

/*
 * This file contain functions about tab manipulations
 */

using namespace std;

void	all_cos(double tab[], int size)
{
	int	i(0);

	while (i < size)
	{
		cout << "Cos(" << tab[i] << ") is equal to " << cos(tab[i]) << endl;
		i++;
	}
}

void	all_names(string tab[], int size)
{
	for (int i(0); i < size; ++i)
		cout << "Name received is " << tab[i] << endl;
}
