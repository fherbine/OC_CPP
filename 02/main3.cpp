#include <iostream>

using namespace std;

int main(void)
{
	int testVar(42);
	int& refTV(testVar);

	cout << "This is the value of the 'testVar' : " << testVar << endl;
	cout << "Then, it's the 'refTV' 's value : " << refTV << endl;
	return (0);
}
