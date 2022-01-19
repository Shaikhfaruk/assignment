// *******Pattern****** //
// WAP to print 1 to 5 table using while loop
#include <stdio.h>

int main()
{
    int a = 1, b;
    while (a <= 5)
    {
        b = 1;
        while (b <= a)
        {
            printf("* ");
            b++;
        }
        a++;
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