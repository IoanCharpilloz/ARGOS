// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0026_ArraySum.h"

// Function definitions
// TODO: implement ex_0026_ArraySum
void ex_0026_ArraySum()
{
    int array[50];
    int status;
    int nb;

    do
    {
        printf("Nb values (max.50): ");
        status = scanf("%d", &nb);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while (status != 1 || nb < 0 || nb > 50);

    for (int i = 0; i < nb; i++)
    {
        int value;
        do
        {
            printf("Value %d? ", i);
            status = scanf("%d", &value);

            {
                int c;
                do
                {
                    c = getchar();
                } while (c != '\n' && c != EOF);
            }
        } while (status != 1);

        array[i] = value;
    }
    printf("array:\n");

    for (int i = 0; i < nb; i++)
    {
        if (i + 1 != nb)
        {
            printf("%d ", array[i]);
        }
        else
        {
            printf("%d", array[i]);
        }
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < nb; i++)
    {
        sum = sum + array[i];
    }
    printf("Total sum: %d\n", sum);
}
