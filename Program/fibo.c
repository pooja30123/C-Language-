#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1,t;
    printf("Enter the term no:");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(int i=0;i<=n;i++)
    {
        t=b;
        b=a+b;
        a=t;
        printf("%d \n",b);
    }
}