#include<stdio.h>
int main()
{
    int i,j,r=5,n=1;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d   ",n);
            n++;
        }
        printf("\n");
    }
}