// WAP to check given value is greater then 100 or smaller then 100

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    if (a > 100)
    {
        printf("Given value is Greater then 100");
    }
    else if (a == 100)
    {
        printf("Given value is Equels 100");
    }
    else
    {
        printf("Given value is Less then 100");
    }

    return 0;
}

// Output

// Enter a value: 15
// Given value is Less then 100

// Enter a value: 100
// Given value is Equels 100

// Enter a value: 55
// Given value is Greater then 100