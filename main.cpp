#include<iostream>
using namespace std;
int main()
{
	int a;

	cout << "Input a --> ";
	cin >> a;
	if (a > 20)
		cout << "Error 404" << endl;
	int dob = 1;
	for (int i = a; i <= 20; ++i)
		dob = dob * i;
	cout << "Dobytok = " << dob << endl;
	return 0;
}