// *******Pattern****** //
// WAP to print 1 to 5 table using Do While loop

#include <stdio.h>

int main()
{
    int a = 5, b;
    do
    {
        b = 1;
        do
        {
            printf("%c \t", b + 64);
            b++;
        } while (b <= a);
        printf("\n");
        a--;
    } while (a >= 1);

    return 0;
}

// Output

// A 	B 	C 	D 	E
// A 	B 	C 	D
// A 	B 	C
// A 	B
// A