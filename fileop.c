#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[] = "myfile.txt";
    fp = fopen(filename,"w");
    fprintf(fp,"This is file crated by my program\n");
    fprintf(fp,"I'm Happy.");
    fclose(fp);
    return 0;

}
