
#include <stdio.h>

int main()
{
    int a = 1, b;

    do
    {
        b = 5;
        do
        {
            printf("%d ", b);
            b--;
        } while (b >= a);
        printf("\n");
        a++;
    } while (a <= 5);

    return 0;
}

// Output

// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5