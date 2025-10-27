#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int number;
    std::cin >> number;

    int biggestDigit = 0;

    while (number != 0)
    {
        int digit = number % 10;

        if (digit > biggestDigit)
            biggestDigit = digit;

        number /= 10;
    }

    std::cout << "Largest digit: " << biggestDigit;

    return 0;
}