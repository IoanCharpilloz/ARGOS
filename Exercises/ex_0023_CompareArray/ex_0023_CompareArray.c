// Author: HE-Arc

// Standard includes
#include <stdbool.h>

// Local includes
#include "ex_0023_CompareArray.h"

// Function definitions
bool ex_0023_CompareArray(int array1[], int array2[], int nb_vals)
{
    for (int i = 0; i < nb_vals; i++)
    {
        if (array1[i] != array2[i])
        {
            return false;
        }
    }
    return true;
}
// TODO: implement ex_0023_CompareArray
