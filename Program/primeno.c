#include<stdio.h>
int main()
{
    int i,j,c,n;
    printf("Prime No are:\n");
    for(i=1; i<=100; i++)
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