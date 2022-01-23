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
            printf("%c \t", a + 64);
            b++;
        } while (b <= a);
        printf("\n");
        a--;
    } while (a >= 1);

    return 0;
}

// Output

// E 	E 	E 	E 	E
// D 	D 	D 	D
// C 	C 	C
// B 	B
// A