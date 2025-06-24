#include<stdio.h>
int main()
{
    int i,j,r=5;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}