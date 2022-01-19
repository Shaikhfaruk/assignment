// WAP to calculate Sum of first 10 Numbers
#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    while (a <= 10)
    {
        b = b + a;
        a++;
    }
    printf("\n First 10 number sum: %d", b);

    return 0;
}

// Output

//  First 10 number sum: 55