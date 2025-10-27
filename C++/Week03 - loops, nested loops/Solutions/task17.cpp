#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int number;
    std::cin >> number;
    int original = number;

    int result = 0;

    while (number != 0)
    {
        result *= 10;
        result += number % 10;

        number /= 10;
    }

    std::cout << (result == original ? "YES" : "NO");

    return 0;
}