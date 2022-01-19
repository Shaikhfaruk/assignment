// WAP to check given value a Even or Odd

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Given value is Even");
    }
    else
    {
        printf("Given value is Odd");
    }

    return 0;
}

// Output

// Enter a value: 15
// Given value is Odd

// Enter a value: 10
// Given value is Even