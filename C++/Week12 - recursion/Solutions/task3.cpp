#include <iostream>

int toBinaryRec(int number)
{
    if (number == 0)
        return 0;

    return number % 2 + 10 * toBinaryRec(number / 2);
}

// f(13) -> 1 + (10 * f(6))
// f(6)  -> 0 + (10 * f(3))
// f(3)  -> 1 + (10 * f(1))
// f(1)  -> 1 + (10 * f(0))
// f(0)  -> ???

// f(13) -> 1 + (10 * (0 + 10 * (1 + 10 * (1 + 10 * 0))) )

/*
13 : 2 | 1
6  : 2 | 0
3  : 2 | 1
1  : 2 | 1
0  -------

1101
*/
int main()
{
    std::cout << toBinaryRec(13);
}