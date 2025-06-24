#include<stdio.h>
int main()
{
    int abc[5];
    FILE *fp=fopen("abc.txt","w");
    printf("Enter the 5 number: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&abc[i]);
        fprintf(fp,"%d  ",abc[i]);
    }
    fclose(fp);
    printf("No written sucessfully");
    return 0;
}