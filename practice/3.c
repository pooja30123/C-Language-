#include<stdio.h>
int main()
{
    int x;
    
    printf("Enter No:\n");
    scanf("%d",&x);
    for(int i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",x,i,x*i);
    }
    
   
    
}