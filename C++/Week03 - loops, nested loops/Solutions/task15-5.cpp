#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int number;
    std::cin >> number;

    int firstPlace = 0;
    int secondPlace = 0;

    while (number != 0)
    {
        int digit = number % 10;

        if (digit > firstPlace)
        {
            secondPlace = firstPlace;
            firstPlace = digit;
        }
        else if (digit > secondPlace && digit < firstPlace)
        {
            secondPlace = digit;
        }

        number /= 10;
    }

    std::cout << "Second largest digit: " << secondPlace;

    return 0;
}