// *******Pattern****** //
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
            printf("%d ", c * c);
            b++;
            c++;
        } while (b <= a);
        printf("\n");
        a++;
    } while (a <= 5);

    return 0;
}

// Output 🥟

// 1
// 4 9
// 16 25 36
// 49 64 81 100
// 121 144 169 196 225