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
            printf("%c \t", b + 64);
            b++;
        }
        printf("\n");
        a--;
    }

    return 0;
}

// Output

// A 	B 	C 	D 	E
// A 	B 	C 	D
// A 	B 	C
// A 	B
// A