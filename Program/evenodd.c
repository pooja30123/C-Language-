#include <stdio.h>
int main()
{
    int n;
    printf("Enter the No: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is Odd",n);
    }
    return 0;
}