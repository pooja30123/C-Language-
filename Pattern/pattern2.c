#include<stdio.h>
int main()
{
    int i,j,r=5;
    for(i=1; i<=r; i++)
    {
        for(j=5; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}