// WAP to print 1 to 10 table using while loop

#include <stdio.h>

int main()
{
    int a = 1, b;

    while (a <= 10)
    {
        b = 1;
        while (b <= a)
        {
            printf("%d", b);
            b++;
        }
        printf("\n");
        a++;
    }

    return 0;
}

// Output

// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// 12345678
// 123456789
// 12345678910