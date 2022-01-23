// WAP to print 1 to 5 table using Do While loop

#include <stdio.h>

int main()
{
    int a = 1, b, c = 1;

    do
    {
        b = 1;
        do
        {
            printf("%d \t", c);
            b++;
            c++;

        } while (b <= a);
        {
            printf("\n");
            a++;
        }
    } while (a <= 5);

    return 0;
}

// Output

// 1
// 2 	3
// 4 	5 	6
// 7 	8 	9 	10
// 11 	12 	13 	14 	15