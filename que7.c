// WAP to check given numbar is positive or negetive

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Given number is Positive");
    }
    else
    {
        printf("Given number is negetive");
    }

    return 0;
}

// Output

// Enter a number: 15
// Given number is Positive

// Enter a number: -15
// Given number is negetive