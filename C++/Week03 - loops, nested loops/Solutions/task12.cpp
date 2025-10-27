#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int number;
    std::cin >> number;

    int lastDigit = 0;
    while (number >= 10)
    {
        number /= 10;
    }

    std::cout << "First Digit: " << number;
}