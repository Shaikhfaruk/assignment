// WAP to calculate a group of 41 to 50 Numbers

#include <stdio.h>

int main()
{
    int a = 41, b = 0;

    while (a <= 50)
    {
        b = b + (a * a);
        a++;
    }
    printf("Square sum of 41 to 50: %d", b);

    return 0;
}

// Output
// Square sum of 41 to 50: 20785