#include <iostream>

using namespace std;

int main()
{
    int input;
    int sum = 0;

    do
    {
        cin >> input;
        sum += input;

    } while(input != 0);

    cout << "Prod: " << sum;
}