// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0010_LowercaseUppercase.h"

// Function definitions
void ex_0010_LowercaseUppercase(void)
{
  char letter;
  int status;

  printf("Type a letter: ");

  status = scanf("%c", &letter);

  if (status == EOF)
  {
    return;
  }

  int c;
  while ((c = getchar()) != '\n' && c != EOF)
  {
  }

  if (letter >= 'a' && letter <= 'z')
  {
    printf("lowercase\n");
  }
  else if (letter >= 'A' && letter <= 'Z')
  {
    printf("UPPERCASE\n");
  }
  else
  {
    printf("The character you entered is not a letter.\n");
  }
}
