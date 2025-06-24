#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp, *fq;
    char ch;

    fp = fopen("test.txt", "r");
    if (fp == NULL) 
    {
        printf("Error in opening ");
        return 1;
    }

    fq = fopen("test2.txt", "w");
    if (fq == NULL) 
    {
        printf("Error in opening");
        fclose(fp);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) 
    {
        if (isupper(ch))
        {
            ch = tolower(ch);
        }
        fputc(ch, fq);
    }

    fclose(fp);
    fclose(fq);

    return 0;
}
