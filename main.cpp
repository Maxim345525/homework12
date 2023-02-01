#include <iostream>
int main()
{
    int avg = 0;
    for (int i = 0; i <= 1000; i++)
        avg += i;

    std::cout << "Average: " << avg / 1000.0 << std::endl;

    return 0;
}