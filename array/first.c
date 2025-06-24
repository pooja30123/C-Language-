#include<stdio.h>
int main()
{
    int A[10];
    printf("Enter the value of arrya:\n");
    for(int i=0;i<5;i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&A[i]);
    }
    printf("A[] = { ");
    for(int i=0;i<5;i++)
    {
        printf("%d, ",A[i]);
    }
    printf("}");
    return 0;
}