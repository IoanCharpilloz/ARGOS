// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0027_Array2DSum.h"

// Function definitions
// TODO: implement ex_0027_Array2DSum
// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Function definitions
// TODO: implement ex_0026_ArraySum
void ex_0027_Array2DSum(void)
{
    int array[50][50];
    int status;
    int line;
    int colone;

    do
    {
        printf("Nb lines (max.50): ");
        status = scanf("%d", &line);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while (status != 1 || line < 0 || line > 50);

    do
    {
        printf("Nb columns (max.50): ");
        status = scanf("%d", &colone);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while (status != 1 || colone < 0 || colone > 50);

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < colone; j++)
        {
            int value;
            do
            {
                printf("array[%d][%d]: ", i, j);
                status = scanf("%d", &value);
                {
                    int c;
                    do
                    {
                        c = getchar();
                    } while (c != '\n' && c != EOF);
                }
            } while (status != 1);
            array[i][j] = value;
        }
    }

    int sum = 0;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < colone; j++)
        {
            sum = sum + array[i][j];
        }
    }
    printf("Total sum: %d\n", sum);
}
