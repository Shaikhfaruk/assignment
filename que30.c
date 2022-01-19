// *******Pattern****** //
// WAP to print 1 to 5 table using while loop

#include <stdio.h>

int main()
{
    int a = 1, b, c = 1;

    while (a <= 5)
    {
        b = 1;
        while (b <= a)
        {
            printf("%d \t", a);
            b++;
            c++;
        }
        printf("\n");
        a++;
    }

    return 0;
}

// Output

// 1
// 2 	2
// 3 	3 	3
// 4 	4 	4 	4
// 5 	5 	5 	5 	5