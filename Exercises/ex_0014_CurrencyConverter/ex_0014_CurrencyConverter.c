// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h> // for bool, true, false

// Local includes
#include "ex_0014_CurrencyConverter.h"

// Function definitions
void ex_0014_CurrencyConverter(void)
{

  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "USAGE: non-negative value [W | $ | Y | P]\n"
                              "Won = W  Dollar = $  Yen = Y  Pound = P\n"
                              "Please enter the amount to convert: ";
  // print with printf("%s", error_message);
  const char *error_message = "The input format is not correct!!\n";
  // print with printf("%s", unsupported_currency_message);
  const char *unsupported_currency_message = "Unsupported currency!!\n";
  // print with printf("%s", negative_amount_message);
  const char *negative_amount_message = "The input amount is negative!!\n";

  // TODO: read an amount and a currency, validate them, then convert to Swiss francs
  const double WON2CHF = 0.00070;
  const double USD2CHF = 0.99;
  const double YEN2CHF = 0.0067;
  const double POUND2CHF = 1.13;

  double amount;
  char currency;
  int status = 0;

  do
  {
    printf("%s", input_message);
    status = scanf(" %lg %c", &amount, &currency);

    {
      int ch;
      do
      {
        ch = getchar();
      } while (ch != '\n' && ch != EOF);
    }

    if (status != 2)
    {
      printf("%s", error_message);
    }
    else
    {
      if (currency != 'W' && currency != '$' && currency != 'Y' && currency != 'P')
      {
        printf("%s", unsupported_currency_message);
      }
      if (amount < 0.0)
      {
        printf("%s", negative_amount_message);
      }
    }
  } while ((status != 2 || (currency != 'W' && currency != '$' && currency != 'Y' && currency != 'P') || amount < 0.0) && status != EOF);

  if (status != EOF)
  {
    double chf_result = 0.0;

    switch (currency)
    {
    case 'W':
      chf_result = amount * WON2CHF;
      break;
    case '$':
      chf_result = amount * USD2CHF;
      break;
    case 'Y':
      chf_result = amount * YEN2CHF;
      break;
    case 'P':
      chf_result = amount * POUND2CHF;
      break;
    }
    printf("Swiss francs: %.3f\n", chf_result);
  }
}
