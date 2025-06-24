#include<stdio.h>
int main()
{
   int i,j,k,r=4;
   int n =1;

   for(i=1; i<=r; i++)
   {
        for(j=r; j>i; j--)
        {
            printf("   ");
        }
        for(k =1; k<=i; k++)
        {
            printf("%d     ", n);
            n++;
        }
        printf("\n");
   }
}