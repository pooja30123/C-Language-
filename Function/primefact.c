#include<stdio.h>
int prime(int x)
{ 
   int c=0;
    for(int j=1;j<=x;j++)
    {
       if(x%j==0)
       c++;
    }
    if(c==2)
      return 1;
    else
      return 0;
}
int factor(int a, int i)
{
   if(i<=a)
   { 
      if(a%i==0)
     {
        if ( prime(i)==1)
        printf("\t %d",i);
     }
     factor(a,++i);
   }
     else
     return 0;
}
int main()
{
 int n;
 printf("Enter the number \n");
 scanf("%d",&n);
 factor(n,1);
}