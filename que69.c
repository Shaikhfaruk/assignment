#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter The number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
