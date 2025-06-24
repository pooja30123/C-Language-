#include<stdio.h>
int main()
{
    int n,f1,f2,f3,f4,f5,r,rev=0;
    printf("Enter digit no:");
    scanf("%d",&n);
    int m = n;
    if(n<10000 || n>99999)
        printf("No is not 5 digit no......");

    else
    {
        /*f5 = m%10;   //5th digit
        m=m/10;
        f4 = m%10;  //4th digit
        m=m/10;
        f3 = m%10;  //3rd digit
        m=m/10;
        f2 = m%10;  //2nd digit
        m=m/10;
        f1 = m%10;  //1st digit*/

        while (n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        

        if(m==rev)
            printf("%d is Palidrome Number",m);
        else
            printf("%d is not Palidrome",m);

    }
    
}