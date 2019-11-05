#include <stdio.h>

int main()
{
    int i, j, k;

    k = 1;
    for(i=1; i<=200; i++)
    {
        for(j=1; j<=5; j++, k++)
        {
            printf("\t%-3d\t", k);
        }

        printf("\n\t");
    }

    return 0;
}
