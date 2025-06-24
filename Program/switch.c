#include<stdio.h>
int main()
{
    int i,a=0,b=0;
    printf("Enter a Number: ");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
        printf("Enter 2 value for Sum \n");
        scanf("%d %d",&a,&b);
        printf("The sum of %d and %d is %d",a,b,a+b);
        break;

    case 2:
        printf("Enter 2 value for Sub \n");
        scanf("%d %d",&a,&b);
        printf("The diffrence of %d and %d is %d",a,b,a-b);
        break;
    
    case 3:
        printf("Enter 2 value for Multiplication \n");
        scanf("%d %d",&a,&b);
        printf("The multiplication of %d and %d is %d",a,b,a*b);
        break;

    default:
        printf("Case Out of bound");
        break;
    }
}