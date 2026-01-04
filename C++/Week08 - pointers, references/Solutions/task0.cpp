#include <iostream>

void mySwap(int* a, int* b)
{
    if (a == nullptr ||
        b == nullptr)
        return;

    int temp = *a;
    *a = *b;
    *b = temp;
}

void mySwapRef(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 1, b = 5;

    std::cout << a << ' ' << b;
}