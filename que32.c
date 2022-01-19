// *******Pattern****** //
// WAP to print 1 to 5 table using while loop
#include <stdio.h>

int main()
{
    int a = 1, b;
    while (a <= 5)
    {
        b = 1;
        while (b <= a)
        {
            printf("%c \t", a + 64);
            b++;
        }
        printf("\n");
        a++;
    }

    return 0;
}

// Output

// A 	
// B	B 	
// C	C 	C 	
// D	D 	D 	D 	
// E	E 	E 	E 	E 