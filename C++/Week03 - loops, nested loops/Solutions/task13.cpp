#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int number;
    std::cin >> number;

    std::cout << "Enter a sum to check: ";
    
    int N;
    std::cin >> N;

    int sum = 0;

    while(number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    std::cout << (sum == N ? "YES" : "NO");
}