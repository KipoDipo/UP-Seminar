#include <stdio.h>

int main()
{
    int day, month;

    scanf("%d%d", &day, &month);

    if (!(day >= 1 && day <= 31 && month >= 1 && month <= 12))
    {
        print("Wront input!!!");
        return 1;
    }


    // 1st 11th 21st 31st
    // 2nd 12th 22nd
    // 3rd 13th 23rd
    // 4th 14th 24th ...
    
    int lastDigit = day % 10;

    if (lastDigit == 1 && day != 11) 
        printf("%dst", day);
    else if (lastDigit == 2 && day != 12)
        printf("%dnd", day);
    else if (lastDigit == 3 && day != 13)
        printf("%drd", day);
    else
        printf("%dth", day);

    
    printf(" of ");

    switch(month)
    {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }

    return 0;
}