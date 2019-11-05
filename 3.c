#include<stdio.h>
int main()
{
    int i,c=200,k,j,r=5;
    for(i=1000;i<=r;i--)
         for(j=1; j<=c; j++, k++)
        {
            printf("%d\t", k);
        }

        printf("\n");
    return 0;
}
