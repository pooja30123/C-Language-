#include<stdio.h>
int main()
{
    int i,j,r=4,n=1;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=r; j>=i; j--)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
}