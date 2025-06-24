#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);

}
int main()
{
    int x;
    printf("Enter the No:");
    scanf("%d",&x);
    printf("%d! = %d",x,fact(x));
}