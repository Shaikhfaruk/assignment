// *******Pattern****** //
// WAP to print 1 to 5 table using for loop

#include <stdio.h>

int main()
{
    int a, b, c = 1;

    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf("%d ", c * c);
            c++;
        }
        printf("\n");
    }

    return 0;
}

// Output 🥟

// 1
// 4 9
// 16 25 36
// 49 64 81 100
// 121 144 169 196 225