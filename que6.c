// WAP to check given value is greater then 50 or lessthen

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    if (a > 50)
    {
        printf("Given value is Greater then 50");
    }
    else if (a == 50)
    {
        printf("Given value is Equels 50");
    }
    else
    {
        printf("Given value is Less then 50");
    }

    return 0;
}

// Output

// Enter a value: 15
// Given value is Less then 50

// Enter a value: 50
// Given value is Equels 50

// Enter a value: 55
// Given value is Greater then 50