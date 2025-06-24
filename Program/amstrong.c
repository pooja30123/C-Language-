#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,r,m,s,t;
    printf("Enter No:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        p=log10(i)+1;
        s=i;
        m=0;
        t=i;
        while (t!=0)
        {
           r=t%10;
           m=m+pow(r,p);
           t=t/10;
        }
        if(s==m)
        {
            printf("%d\n",s);
        }
        
    }
    return 0;
}