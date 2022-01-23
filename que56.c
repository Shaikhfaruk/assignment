// WAP to print 1 to 5 table using Do While loop

#include <stdio.h>

int main()
{
    int a = 5, b, c = 1;

    do
    {
        b = 1;
        do
        {
            printf("%d \t", a);
            b++;
            c++;
        } while (b <= a);
        printf("\n");
        a--;
    } while (a >= 1);

    return 0;
}

// Output

// 5 	5 	5 	5 	5
// 4 	4 	4 	4
// 3 	3 	3
// 2 	2
// 1