#include <stdio.h>

int main()
{
    int rows=200, cols=5, i, j, k;

    k = 1000;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++, k--)
        {
            printf("%d\t", k);
        }

        printf("\n");
    }

    return 0;
}
