#include <stdio.h>
#include<stdio.h>
int fib(int a,int b, int i)
{ 
    int c;
    if(i<=25)
        c=a+b;
        
    printf(" %d\n",c);
    fib(b,c,++i);
}
int main()
{  
    int x,y;
    x=1;
    y=1;
    printf("%d \n %d \n",x,y);
    fib(x,y,2);
 }