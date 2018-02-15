/*
	A small lib maths copy
*/

#include <iostream>
#include <string>

using namespace std;

double fh_fabs(double n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

double fh_pow(double n, double power)
{
	if (pow == 0)
		return (1);
	else
		return (fh_pow(n, power - 1) * n);
}

int main(void)
{
	string userName("(undefined)");
	cout << "Please, enter your entire name :";
	getline(cin, userName);

	return (0);
}
