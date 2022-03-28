// WAP to print

#include <stdio.h>

int square(int a);
int cube(int a);

int main()
{

    int a;

    printf("\n Square is %d\n", square(a));

    printf("\n Cube is %d\n", cube(a));
    return 0;
}

int square(int a)
{
    int b;
    printf("Enter a value: ");
    scanf("%d", &b);
    a = b * b;
    return a;
}

int cube(int a)
{
    int b;
    printf("Enter a value: ");
    scanf("%d", &b);
    a = b * b * b;
    return a;
}