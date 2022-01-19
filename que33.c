// *******Pattern****** //
// WAP to print 1 to 5 table using while loop que no 7

#include <stdio.h>

int main()
{
    int a = 1, b;
    while (a <= 5)
    {
        b = 1;
        while (b <= a)
        {
            if (a % 2 == 0)
            {
                printf("%c", 96 + a);
            }
            else
            {
                printf("%c", 64 + a);
            }
            b++;
        }
        a++;
        printf("\n");
    }

    return 0;
}

// Output
// A
// bb
// CCC
// dddd
// EEEEE