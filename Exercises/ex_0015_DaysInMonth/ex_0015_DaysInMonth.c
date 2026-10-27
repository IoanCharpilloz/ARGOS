// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0015_DaysInMonth.h"

// Function definitions
void ex_0015_DaysInMonth(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter the number of the month (january=1, ... , december=12): ";
  int month = 0;
  int status = 0;

  do
  {
    printf("%s", input_message);
    status = scanf("%d", &month);

    {
      int ch;
      do
      {
        ch = getchar();
      } while (ch != '\n' && ch != EOF);
    }
  } while ((status != 1 || month < 1 || month > 12) && status != EOF);

  if (status != EOF)
  {
    {
      int days = 0;

      switch (month)
      {
      case 1:
        days = 31;
        break;
      case 3:
        days = 31;
        break;
      case 5:
        days = 31;
        break;
      case 7:
        days = 31;
        break;
      case 8:
        days = 31;
        break;
      case 10:
        days = 31;
        break;
      case 12:
        days = 31;
        break;
      case 4:
        days = 30;
        break;
      case 6:
        days = 30;
        break;
      case 9:
        days = 30;
        break;
      case 11:
        days = 30;
        break;
      case 2:
        days = 28;
        break;
      default:
        days = 0;
        break;
      }

      printf("Month %d has %d days.\n", month, days);
    }
  }
}