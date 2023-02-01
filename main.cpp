#include<iostream>
using namespace std;
int main()
{
	int k;
	cout << "Input k-->";
	cin >> k;
	for (int i = 1; i <= 10; i++)
	{

		cout << k << " x " << i << " = " << k * i << endl;

	}
	cout << k << endl;
	return 0;
}