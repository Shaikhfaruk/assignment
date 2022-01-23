// *******Pattern****** //
// WAP to print 1 to 5 table using Do While loop

#include <stdio.h>

int main()
{
    int a = 1, b;
    do
    {
        b = 1;
        do
        {
            if (a % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
            b++;
        } while (b <= a);
        a++;
        printf("\n");
    } while (a <= 5);

    return 0;
}

// Output
// *
// ##
// ***
// ####
// *****