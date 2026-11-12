// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h>

// Local includes
#include "ex_0018_Squares.h"

// Function definitions
// TODO: implement ex_0018_Square and ex_0018_Squares

int ex_0018_Square(int x)
{
    printf("%d \n", x * x);
}

bool ex_0018_Squares(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d ", x * x);
        x++;
    }
}
