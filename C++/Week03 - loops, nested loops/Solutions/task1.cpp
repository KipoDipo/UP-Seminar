#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Enter amount of numbers to enter: ";
    cin >> n;

    int biggestNegative = 0;
    for (int i = 0; i < n; i++)
    {
        int number;
        std::cin >> number;
        
        if (number < 0 && (biggestNegative == 0 || number > biggestNegative))
        {
            biggestNegative = number;
        }
    }
    if (biggestNegative != 0)
    {
        cout << "Biggest negative: " << biggestNegative;
    }
    else
    {
        cout << "No negative numbers have been inputted.";
    }
}