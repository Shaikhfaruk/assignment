// *******Pattern****** //
// WAP to print 1 to 5 table using for loop

#include <stdio.h>

int main()
{
    int a, b;

    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// Output

// *
// * *
// * * *
// * * * *
// * * * * *