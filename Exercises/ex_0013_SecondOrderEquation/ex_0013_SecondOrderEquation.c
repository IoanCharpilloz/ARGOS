// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <math.h>

// Local includes
#include "ex_0013_SecondOrderEquation.h"

// Function definitions
void ex_0013_SecondOrderEquation(void)
{
  // Use the following messages
  // print with printf("%s", usage_message);
  const char *usage_message = "Compute solutions of an equation of the form ax^2 + bx + c = 0\n";
  // print with printf("%s", input_message);
  const char *input_message = "Please enter coefficients a, b, and c: ";
  // print with printf("%s", no_solution_message);
  const char *no_solution_message = "This equation has no solution.\n";
  // print with printf("%s", no_real_solution_message);
  const char *no_real_solution_message = "This equation has no real solution.\n";
  // print with printf("%s", linear_solution_message);
  const char *linear_solution_message = "The solution of this linear equation is: \n";
  // print with printf("%s", double_real_solution_message);
  const char *double_real_solution_message = "The double real solution of this equation is: \n";
  // print with printf("%s", two_real_solutions_message);
  const char *two_real_solutions_message = "The real solutions of this equation are: \n";
  // print with printf("%s", any_real_solution_message);
  const char *any_real_solution_message = "Any real is solution of this equation.\n";

  // TODO: read coefficients a, b and c, then print the real solutions of the equation
  double a, b, c;
  int status = 0;
  const int nbExpectedValues = 3;

  do
  {
    printf("%s", usage_message);
    printf("%s", input_message);

    status = scanf("%lf %lf %lf", &a, &b, &c);

    {
      int ch;
      do
      {
        ch = getchar();
      } while (ch != '\n' && ch != EOF);
    }

  } while (status != nbExpectedValues && status != EOF);

  if (a == 0.0)
  {
    if (b == 0.0)
    {
      if (c == 0.0)
      {
        printf("%s", any_real_solution_message);
      }
      else
      {
        printf("%s", no_solution_message);
      }
    }
    else
    {
      double x = -c / b;
      printf("%s", linear_solution_message);
      printf("x = %.4f\n", x);
    }
  }
  else
  {
    double delta = (b * b) - (4.0 * a * c);

    if (delta > 0.0)
    {
      double x1 = (-b + sqrt(delta)) / (2.0 * a);
      double x2 = (-b - sqrt(delta)) / (2.0 * a);
      printf("%s", two_real_solutions_message);
      printf("x1 = %.4f\nx2 = %.4f\n", x1, x2);
    }
    else if (delta == 0.0)
    {
      double x = -b / (2.0 * a);
      printf("%s", double_real_solution_message);
      printf("x = %.4f\n", x);
    }
    else
    {
      printf("%s", no_real_solution_message);
    }
  }
}
