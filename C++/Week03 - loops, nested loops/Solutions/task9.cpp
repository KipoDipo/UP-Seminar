#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int number;
    std::cin >> number;

    int counter = 0;
    while(number != 0)
    {
        number /= 10;
        counter++;
    }

    std::cout << "Digit count: " << counter;
}