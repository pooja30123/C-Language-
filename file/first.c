#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fq;
    fp=fopen("abc.txt","r");
    char ch;
    //fputs(fp,"ABC");

    fq=fopen("xyz.txt","w");
    
    while ((ch = fgetc(fp)) != EOF) { fputc(ch, fq); }
    fclose(fq);
    fclose(fp);
    return 0;
}