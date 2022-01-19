// WAP to design a calcy with basic operators using switch case

#include <stdio.h>

int main()
{
    char op;
    int a, b;
    printf("Enter an Operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;

    default:
        printf("Error! operator is not match");
    }
    return 0;
}

// Output

// Enter an Operator (+, -, *, /): -
// Enter two operands: 800 60
// 800 - 0 = 60