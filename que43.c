// *******Pattern****** //
// WAP to print 1 to 5 table using for loop

#include <stdio.h>

int main()
{
    int a, b;

    for (a = 1; a <= 5; a++)
    {
        for (b = 5; b >= a; b--)
        {
            printf("%d ", b);
        }
        printf("\n");
    }

    return 0;
}

// Output

// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5