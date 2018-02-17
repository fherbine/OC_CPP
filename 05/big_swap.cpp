#include <iostream>

using namespace std;

void	big_s(int& a, int& b)
{
	int	tmp(0);

	tmp = a;
	a = b;
	b = tmp;
}

int		main(void)
{
	int	n1(0), n2(0);

	cout << "Choose two numbers to swap !" << endl << "The first one : ";
	cin >> n1;
	cout << "Then the second : ";
	cin >> n2;
	big_s(n1, n2);
	cout << "first's value : " << n1 << endl;
	cout << "second's value : " << n2 << endl;
	return (0);
}
