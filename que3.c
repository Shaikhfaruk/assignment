// using scanf we can get value from user

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter Two Numbers For sum: ");
    scanf("%d %d", &a, &b);

    c = a + b;
    printf("\n sum of two numbers: %d", c);

    return 0;
}

// Output

// Enter Two Numbers For sum: 100 200
// sum of two numbers: 300