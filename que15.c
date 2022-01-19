// WAP to check which number for a Day in week using switch

#include <stdio.h>

int main()
{
    char a;
    printf("Enter A Char - F, f, M, m: ");
    scanf("%c", &a);

    switch (a)
    {
    case 'm':
    case 'M':
        printf("\n Male");
        break;
    case 'f':
    case 'F':
        printf("\n Female");
        break;

    default:
        printf("\n Other");
        break;
    }
    return 0;
}

// Output

// Enter A Char - F, f, M, m: f
//  Female

// Enter A Char - F, f, M, m: M
//  Male