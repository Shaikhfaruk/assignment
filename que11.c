// WAP to check given three values which one greater then others

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b > c)
    {
        printf("\n a is grater then others");
    }
    else if (b > a && b > c)
    {
        printf("\n b is grater then others");
    }
    else if (a == b == c)
    {
        printf("\n All values are same");
    }

    else
    {
        printf("\n c is grater then others");
    }
    return 0;
}

// Output

// Enter Three numbers: 15 15 15
//  All values are same

// Enter Three numbers: 5 6 7
//  c is grater then others

// Enter Three numbers: 30 20 10
//  a is grater then others

// Enter Three numbers: 20 30 10
//  b is grater then others