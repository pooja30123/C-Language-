#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the No: ");
    scanf("%d",&n);
    for(i=1; i<11; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}