// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
// TODO: implement ex_0025_FillArray
// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
int ex_0025_FillArray(int array[], int max_capacity)
{

    if (max_capacity <= 0)
    {
        return 0;
    }

    int count = 0;
    int value = 0;
    int status = 0;

    do
    {
        status = scanf("%d", &value);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }

        if (status == EOF)
        {
            break;
        }

        if (status == 1)
        {
            if (value < 0)
            {
                break;
            }
            array[count] = value;
            count++;
        }
    } while (count < max_capacity);

    return count;
}
// TODO: implement ex_0025_FillArray