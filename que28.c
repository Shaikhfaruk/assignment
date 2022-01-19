// *******Pattern****** //
// WAP to print 1 to 5 table using while loop

#include <stdio.h>

int main()
{
    int a = 5, b, c = 1;

    while (a >= 1)
    {
        b = 1;
        while (b <= a)
        {
            printf("%d \t", a);
            b++;
            c++;
        }
        printf("\n");
        a--;
    }

    return 0;
}

// Output

// 5 	5 	5 	5 	5
// 4 	4 	4 	4
// 3 	3 	3
// 2 	2
// 1