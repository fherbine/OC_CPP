#include <iostream>
#include <vector> // Lib needed to create & manipulate dynamic tables
#include <string>

/*
 * Main cpp file
 */

using namespace std;

void	display_str_tab(vector<string> tab, int size)
{
	for (int i(0); i < size; ++i)
		cout << "String is : " << tab[i] << endl;
}

void	display_int_tab(vector<int> tab, int size)
{
	for (int i(0); i < size; ++i)
		cout << tab[i] << '\t';
	cout << endl;
}

int main(void)
{
	vector<int>		int_tab(42, 42);
	vector<string>	str_tab(12, "Default");

	int_tab.push_back(101010);
	str_tab.pop_back();
	display_int_tab(int_tab, int_tab.size());
	display_str_tab(str_tab, str_tab.size());
	return (0);
}
