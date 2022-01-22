// *******Pattern****** //
// WAP to print 1 to 5 table using for loop

#include <stdio.h>

int main()
{
    int a, b, c = 5;

    for (a = 1; a <= c; a++)
    {
        for (b = a; b <= c; b++)
        {
            if (a == 1 || b == a || b == c)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

// Output

// *****
// *  *
// * *
// **
// *