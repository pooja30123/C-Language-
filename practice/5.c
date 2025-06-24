#include<stdio.h>
int fact(int );
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    int y = fact(x);
    printf("%d! = %d",x,y);
      
}
int fact(int n)
{
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}