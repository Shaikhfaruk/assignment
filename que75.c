// WAP Factorial With return with arrgument

#include <stdio.h>

int fact(int a);

int main()
{
    int a;

    printf("Enter a Value: ");
    scanf("%d", &a);
    int fact_value = fact(a);
    printf("Factorial of %d is %d\n", a, fact_value);
    return 0;
}

int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}