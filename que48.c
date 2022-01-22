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
            printf("%c \t", a + 64);
        }
        printf("\n");
    }

    return 0;
}

// Output

// E 	E 	E 	E 	E
// D 	D 	D 	D
// C 	C 	C
// B 	B
// A