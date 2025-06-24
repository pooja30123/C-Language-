#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("abc.txt","r");
    int a,sum=0,c=0;
    if(fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    while (fscanf(fp,"%d",&a)!=EOF)
    {
        sum+=a;
        c++;
    }
    fclose(fp);

    if(c==0)
        printf("No Score Found");
    else
        printf("Average= %2.f\n",(float)sum/c);
}