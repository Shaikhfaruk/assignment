// *******Pattern****** //
// WAP to print 1 to 5 table using Do While loop

#include <stdio.h>

int main()
{
    int a = 1, b, c = 5;

    do
    {
        b = a;
        do
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
        } while (b <= c);
        a++;
        printf("\n");
    } while (a <= c);

    return 0;
}

// Output

// *****
// *  *
// * *
// **
// *