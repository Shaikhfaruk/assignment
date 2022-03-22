// Wap to calculate power of a given number
// using function with type without Argument
// and without Return

#include <stdio.h>

void power()
{
    int a, b, c = 1;
    printf("Enter a num: ");
    scanf("%d", &a);
    printf("\n Enter a raise m: ");
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        c = c * a;
    }
    // printf("\n %d", b);
    printf("\n %d \n", c);
}

int main()
{

    power();

    return 0;
}