#include<stdio.h>
#include<math.h>
int gcd(int,int,int*);
int main()
{
    int m,n,g;
    printf("Enter the first No:");
    scanf("%d",&m);
    printf("Enter the Second No:");
    scanf("%d",&n);
    gcd(m,n,&g);
    printf("%d is GCD of (%d,%d)",g,m,n);
}
int gcd(int a,int b,int*g)
{
    int t,r;
    if(b>a)
    t=a,a=b,b=t;
    while (b!=0)
    {
        r=a/b;
        t=b;
        b=a-r*b;
        a=t;
    }
    *g=a;
}