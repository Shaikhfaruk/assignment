// WAP to check given value is a Divisible by 7

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    if (a % 7 == 0)
    {
        printf("Given value is Divisible by 7");
    }
    else
    {
        printf("Given value is Not Divisible by 7");
    }

    return 0;
}

// Output

// Enter a value: 15
// Given value is Not Divisible by 7

// Enter a value: 21
// Given value is Divisible by 7