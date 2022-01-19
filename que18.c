// WAP to find how many days in a Month

#include <stdio.h>

int main()
{
    int a;
    printf("\n Enter between 1 to 12 number: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("28/29 days");
        break;
    case 3:
        printf("31 days");
        break;
    case 4:
        printf("30 days");
        break;
    case 5:
        printf("31 days");
        break;
    case 6:
        printf("30 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;

    default:
        printf("\n Enter value is wrong");
        break;
    }
    return 0;
}

// Output

// Enter between 1 to 12 number: 5
// 31 days

//  Enter between 1 to 12 number: 2
// 28/29 days