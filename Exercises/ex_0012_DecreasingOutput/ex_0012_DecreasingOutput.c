// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0012_DecreasingOutput.h"

// Function definitions
void ex_0012_DecreasingOutput(void)
{
  int a, b, c;
  int status = 0;

  do
  {
    printf("Please enter 3 integers separated by commas: ");
    status = scanf(" %d , %d , %d", &a, &b, &c);

    if (status == EOF)
    {
      return;
    }

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }

  } while (status != 3);

  int temp;

  if (a < b)
  {
    temp = a;
    a = b;
    b = temp;
  }
  if (a < c)
  {
    temp = a;
    a = c;
    c = temp;
  }
  if (b < c)
  {
    temp = b;
    b = c;
    c = temp;
  }

  printf("The 3 integers sorted in decreasing order: %d, %d, %d\n", a, b, c);
}