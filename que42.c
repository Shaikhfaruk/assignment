// *******Pattern****** //
// WAP to print 1 to 5 table using for loop
#include <stdio.h>

int main()
{
    int a, b;

    for (a = 5; a >= 1; a--)
    {
        for (b = 1; b <= a; b++)
        {
            printf("%d \t", a);
                }
        printf("\n");
    }

    return 0;
}

// Output

// 5 	5 	5 	5 	5
// 4 	4 	4 	4
// 3 	3 	3
// 2 	2
// 1