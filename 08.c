#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
    int numPrisoners, m, i;

    scanf("%d", &numPrisoners);
    scanf("%d", &m);

    int prisoners[numPrisoners];
    int killed[numPrisoners];

    // generate array 1 to numPrisoners
    for (i = 0; i < numPrisoners; i++)
    {
        prisoners[i] = i + 1;
    }

    int *killerPtr = &prisoners[0];

    // printf("@@ &prisoners[0] %d\n", (int)&prisoners[0]);
    // printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

    // for (i = 0; i < numPrisoners; i++)
    // {
    //     printf("%d ", prisoners[i]);
    // }

    // Select prisoner to be killed
    for (i = 0; i < numPrisoners; i++)
    {
        for (int j = i; j < numPrisoners; j += m - 1)
        {
            printf("%d\n", j);
        }
        // append number of prisoner who is killed to array `killed`
        killed[i] = *killerPtr;
        // remove number killed prisoner from array `prisoners`
        removeKilled(&prisoners[0], numPrisoners, *killerPtr);
    }

    // for (i = 0; i < numPrisoners; i++)
    // {
    //     printf("%d ", killed[i]);
    // }
    return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    for (int i = killedPrisoner - 1; i < size; i++)
    {
        if (i + 1 < size)
        {
            array[i] = array[i + 1];
        }
        else
        {
            array[i] = 0;
        }
    }
}

/**
 * 
 * 3
 * 2
 * 
 * 1 2 3
 * 2
 * 1 3
 * 2 1
 * 3
 * 2 1 3
 * 
*/