#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    if(n==1)
    return 0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int m;
    printf("Enter No:");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            if(isprime(i))
                printf("%d\n",i);
        }
    }
}