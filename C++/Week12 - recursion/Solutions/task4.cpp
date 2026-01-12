#include <iostream>

bool isPowerOf2Iter(int number)
{
    if (number <= 0)
        return false;

    while (number > 1)
    {
        if (number % 2 == 1) // odd
            return false;
        
        number /= 2;
    }

    return true;
}

bool isPowerOf2Rec(int number)
{
    if (number == 1)
        return true;

    if (number <= 0 || number % 2 == 1)
        return false;

    return isPowerOf2Rec(number / 2);
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << isPowerOf2Rec(16) << '\n';
    std::cout << isPowerOf2Rec(8) << '\n';
    std::cout << isPowerOf2Rec(4) << '\n';
    std::cout << isPowerOf2Rec(1) << '\n';
    std::cout << isPowerOf2Rec(0) << '\n';
    std::cout << isPowerOf2Rec(18) << '\n';
    std::cout << isPowerOf2Rec(1128) << '\n';
}