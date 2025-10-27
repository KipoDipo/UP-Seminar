#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int number;
    std::cin >> number;

    bool isDecreasing = true;

    while (number >= 10)
    {
        int firstDigit = number % 10;
        int secondDigit = (number / 10) % 10;

        if (firstDigit > secondDigit)
        {
            isDecreasing = false;
            break;
        }

        number /= 10;
    }

    std::cout << (isDecreasing ? "YES" : "NO");
    return 0;
}