#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("s.txt","r");
    //fprintf(fp,"Hello, Sahil!");
    fclose(fp);
}