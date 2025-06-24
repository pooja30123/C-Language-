#include<stdio.h>
int main()
{
    int i,j,r=3,n=1;
    for(i=1; i<=r; i++)
    {
        for(j=r; j>=i; j--)
        {
            printf("%d   ",n);
            n++;
        }
        printf("\n");
    }
}