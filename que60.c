// WAP to print 1 to 5 table using Do While loop

#include <stdio.h>

int main()
{
    int a = 1, b;
    do
    {
        b = 1;
        do
        {
            printf("%c \t", a + 64);
            b++;
        } while (b <= a);
        printf("\n");
        a++;
    } while (a <= 5);

    return 0;
}

// Output

// A
// B	B
// C	C 	C
// D	D 	D 	D
// E	E 	E 	E 	E