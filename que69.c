#include <stdio.h>

int main()
{
    int n, i, j;
    printf(" Enter a Number for : ");
    scanf("%d", &n);
    do
    {
        i = n;
        do
        {
            j = 1;
            if (j == 1 || j == i || i == n)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
            j++;
        } while (i <= j);
        i--;
    } while (i >= 1);

    return 0;
}
