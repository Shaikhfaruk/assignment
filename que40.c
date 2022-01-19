#include <stdio.h>

int main()
{
    int a = 1, b, c = 5;

    while (a <= c)
    {

        b = a;
        while (b <= c)
        {
            if (a == 1 || b == a || b == c)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            b++;
        }
        a++;
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