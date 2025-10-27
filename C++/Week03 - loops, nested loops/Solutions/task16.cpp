#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int number;
    std::cin >> number;

    int result = 0;

    while (number != 0)
    {
        result *= 10;
        result += number % 10;

        number /= 10;
    }

    std::cout << "Reversed: " << result;

    return 0;
}