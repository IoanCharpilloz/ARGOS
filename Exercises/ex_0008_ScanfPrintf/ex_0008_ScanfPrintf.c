// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0008_ScanfPrintf.h"

// Function definitions
void ex_0008_ScanfPrintf(void)
{
  char a, b, c;
  printf("\n\nPlease enter 3 letters:\n");
  scanf(" %c %c %c", &a, &b, &c);

  printf("\nHere are the corresponding ASCII codes:\n");
  printf("%c--------->%d\n", a, a);
  printf("%c--------->%d\n", b, b);
  printf("%c--------->%d\n", c, c);
}
