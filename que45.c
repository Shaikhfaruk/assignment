// *******Pattern****** //
// WAP to print 1 to 5 table using for loop

#include <stdio.h>

int main()
{
    int a, b;

    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf("%c \t", b + 64);
        }
        printf("\n");
    }

    return 0;
}

// Output

// A
// A 	B
// A 	B 	C
// A 	B 	C 	D
// A 	B 	C 	D 	E