#include<stdio.h>
int main()
{
    int n,f1,f2,f3,f4,f5;
    printf("Enter digit no:");
    scanf("%d",&n);
    int m = n;
    if(n<10000 || n>99999)
        printf("No is not 5 digit no......");
    else
    {
        f5 = m%10; //5th digit
        m=m/10;
        f4 = m%10; //4th digit
        m=m/10;
        f3 = m%10; //3rd digit
        m=m/10;
        f2 = m%10; //2nd digit
        m=m/10;
        f1 = m%10; //1st digit
        if(f1 == f5 && f2 == f4)
            printf("%d is Palidrome Number",n);
        else
            printf("%d is not Palidrome",n);
    }
}