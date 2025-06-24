#include<stdio.h>
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    if(x>0)
    {
        printf("%d is Positive",x);
        if(x%2==0)
            printf("%d is Even",x);
        else
            printf("%d is Odd",x);
    }
    else if(x<0)
    {
        printf("%d is Negative",x);
        if(x%2==0)
            printf("%d is Even",x);
        else
            printf("%d is Odd",x);
    }
    else
        printf("%d is Zero",x);
    
}