#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int start; 

	cout << "������� �������� --> ";
	cin >> start;
	int sum = 0; 
	for (int i = start; i <= 500; ++i)
		sum += i;   
	cout << "���� = " << sum << endl;
	return 0;
}