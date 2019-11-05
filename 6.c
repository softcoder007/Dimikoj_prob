#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int sum = a + e;
    printf("sum = %d\n",sum);
    }
    return 0;
}
