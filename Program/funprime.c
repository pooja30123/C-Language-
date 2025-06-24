#include<stdio.h>
void printprime(int p,int q);
int main()
{
    int a,b;
    printf("Enter the range of prime no:");
    scanf("%d %d",&a,&b);
    printprime(a,b);
}
void printprime(int p,int q)
{
int i,j,c,n;
    printf("Prime No are:\n");
    for(i=p; i<=q; i++)
    {
        c=1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
               c=0;
            }
        }
        if(i==1)
        {
            c=0;
        }
        if(c==1)
        {
            printf("\n %d", i);
        }
    }

}