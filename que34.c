// *******Pattern****** //
// WAP to print 1 to 5 table using while loop

#include <stdio.h>

int main()
{
    int a = 5, b;
    while (a >= 1)
    {
        b = 1;
        while (b <= a)
        {
            printf("%c \t", a + 64);
            b++;
        }
        printf("\n");
        a--;
    }

    return 0;
}

// Output

// E 	E 	E 	E 	E
// D 	D 	D 	D
// C 	C 	C
// B 	B
// A