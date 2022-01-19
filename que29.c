// *******Pattern****** //
// WAP to print 1 to 5 table using while loop

#include <stdio.h>

int main()
{
    int a = 1, b;

    while (a <= 5)
    {
        b = 5;
        while (b >= a)
        {
            printf("%d ", b);
            b--;
        }
        printf("\n");
        a++;
    }

    return 0;
}

// Output

// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5