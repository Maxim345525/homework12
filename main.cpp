#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    
    int a, res;
    double sum = 0;
    int k = 0;
    cout << "Input number: ";
    cin >> a;
    while (a != 0) 
    {
        res = a % 10;
        if (res != 3 && res != 6) {
            sum += res * pow(10, k);
            k++;
        }
        a /= 10;
    }
    cout << "Number without 3 and 6---> " << sum;
}