// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0017_Factorial.h"

// Function definitions
void ex_0017_Factorial(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter a non-negative integer N: ";

  // TODO: read a non-negative integer N, then compute and print N!
  int n = 0;
  int status = 0;

  do
  {
    printf("%s", input_message);
    status = scanf("%d", &n);

    {
      int ch;
      do
      {
        ch = getchar();
      } while (ch != '\n' && ch != EOF);
    }

  } while ((status != 1 || n < 0) && status != EOF);

  // Calcul et affichage de la factorielle
  if (status != EOF)
  {
    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
      fact = fact * i;
    }

    printf("%d! = %llu\n", n, fact);
  }
}
