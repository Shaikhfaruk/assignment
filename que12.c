// WAP to Check given value is a
//  Number, Charecter, Lower Case, Upper Case or Symbol

#include <stdio.h>

int main()
{
    char a;

    printf("Enter a Value: ", &a);
    scanf("%c", &a);

    if (a >= 65 && a <= 90)
    {
        printf("\n Given charecter is Uppercase");
    }
    else if (a >= 97 && a <= 122)
    {
        printf("\n Given charecter is Lowercase");
    }
    else if (a >= 48 && a <= 57)
    {
        printf("\n Given charecter is a Number");
    }
    else
    {
        printf("\n Given charecter is a Symbol value");
    }
    return 0;
}

// Output

// Enter a Value: A
//  Given charecter is Uppercase

// Enter a Value: 5
//  Given charecter is a Number

// Enter a Value: &
//  Given charecter is a Symbol value

// Enter a Value: f
//  Given charecter is Lowercase
