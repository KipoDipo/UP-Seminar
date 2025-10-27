#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int lowerCounter = 0;
    int upperCounter = 0;
    int digitCounter = 0;
    int otherCounter = 0;

    for (int i = 0; i < N; i++)
    {
        char input;
        scanf(" %c", &input);

        if (input >= 'a' && input <= 'z')
            lowerCounter++;
        else if (input >= 'A' && input <= 'Z')
            upperCounter++;
        else if (input >= '0' && input <= '9')
            digitCounter++;
        else
            otherCounter++;
    }

    printf("Lower Counter: %d\n", lowerCounter);
    printf("Upper Counter: %d\n", upperCounter);
    printf("Digit Counter: %d\n", digitCounter);
    printf("Other Counter: %d\n", otherCounter);
}