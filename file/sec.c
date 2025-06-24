#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fq;
    fp=fopen("abc.txt","r");
    char ch;
    //fputs(fp,"ABC");

    fq=fopen("test2.txt","w");
    fseek(fp, 0, SEEK_END);
    int fp_size=ftell(fp);
    
    for (int i = fp_size - 1; i >= 0; i--) { fseek(fp, i, SEEK_SET); ch = fgetc(fp); fputc(ch, fq); }
    
    fclose(fq);
    fclose(fp);
    return 0;
}