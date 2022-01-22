// WAP to print 1 to 5 table using for loop

#include <stdio.h>

int main()
{
  int a, b, c = 1;

  for (a = 1; a <= 5; a++)
  {
    for (b = 1; b <= a; b++)
    {
      printf("%d \t", c);
      c++;
    }
    printf("\n");
  }

  return 0;
}

// Output

// 1
// 2 	3
// 4 	5 	6
// 7 	8 	9 	10
// 11 	12 	13 	14 	15