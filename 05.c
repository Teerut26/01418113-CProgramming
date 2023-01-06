#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    int height = 2 * n - 1;
    int half = height / 2;
    for (i = 0; i < height; i++)
    {
        if (i <= half)
        {
            for (j = 0; j <= i; j++)
            {
                if (j % 2)
                {
                    printf("x");
                }
                else
                {
                    printf("-");
                }
            }
        }

        printf("\n");
    }
    return 0;
}