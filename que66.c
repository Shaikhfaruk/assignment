// *******Pattern****** //
// WAP to print 1 to 5 table using Do While loop

#include <stdio.h>

int main()
{
    int a = 5, b;
    do
    {
        b = 1;
        do
        {
            printf("* ");
            b++;
        } while (b <= a);
        a--;
        printf("\n");
    } while (a >= 1);

    return 0;
}

// Output
// * * * * *
// * * * *
// * * *
// * *
// *