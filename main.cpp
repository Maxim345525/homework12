#include <iostream>
using namespace std;
int main()
{
    int x;
    for (int i = 100; i < 1000; i++) {
        if (i / 100 == i / 10 % 10 || i / 100 == i % 10 || i / 10 % 10 == i % 10)
            i++;
    }
    cout << x << endl;
    return 0;
}

