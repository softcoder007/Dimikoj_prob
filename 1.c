#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d",&t);
    for(i = 1;i <=t;i++ ){
    scanf("%d",&n);
    if(n % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    }
    return 0;
}
