// To check given user's age is eligible for voting or not

#include <stdio.h>

int main()
{
    int a;
    printf("Enter your Age: ");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }

    return 0;
}

// Output

// Enter your Age: 15
// You are not eligible for voting

// Enter your Age: 23
// You are eligible for voting