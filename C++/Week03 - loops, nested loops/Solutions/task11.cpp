#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int number;
    std::cin >> number;

    int counter = 0;
    while (number != 0)
    {
        if ((number % 10) % 2 == 0)
            counter++;

        number /= 10;
    }

    std::cout << "Even digits count: " << counter;
}