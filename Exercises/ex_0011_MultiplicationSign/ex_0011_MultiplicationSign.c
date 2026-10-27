// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void)
{
  int a, b;
  int status;
  do
  {
    printf("Please enter 2 integers: ");
    status = scanf("%d %d", &a, &b);

    if (status == EOF)
    {
      return;
    }

    int c;
    do
    {
      c = getchar();
    } while (c != '\n' && c != EOF);

  } while (status != 2);

  if ((a > 0 && b > 0) || (a < 0 && b < 0))
  {
    printf("%d * %d > 0\n", a, b);
  }

  else if (a == 0 || b == 0)
  {
    printf("%d * %d = 0\n", a, b);
  }

  else
  {
    printf("%d * %d < 0\n", a, b);
  }
}
