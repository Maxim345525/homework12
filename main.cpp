#include <iostream>
using namespace std;
int main()
{
	int a, b;

	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a number: ";
	cin >> b;
	cout << a << "--> ";

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << b << "--> ";
	for (int i = 1; i <= b; i++)
	{
		if (b % i == 0)
		{
			cout << i << " ";
		}
	}
	return 0;

}