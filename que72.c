#include <stdio.h>

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nTest a: %d b: %d \n", a, b);
    return a, b;
}

int main()
{
    int a = 100, b = 200;
    printf("\n Before Swap Value a: %d b: %d", a, b);
    swap(a, b);
    printf("\nAfter Swap Value a: %d b: %d \n", a, b);

    return 0;
}