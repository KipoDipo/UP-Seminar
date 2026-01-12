#include <iostream>

void overflow()
{
    int arr[1024];

    std::cout << "Called...\n";

    overflow();
}

int main()
{
    overflow();
}