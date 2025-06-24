#include<stdio.h>
int main()
{
    int n,k,t;
    printf("How many no Want to Compare?\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter %d Number:\n",n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0; i<n-i; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
    printf("Sorted Array:\n");
    for(int i=0; i<n;i++)
    {
        printf("%d\t",A[i]);
    }

    printf("\nEnter the No:");
    scanf("%d",&k);

    printf("\n%d smallest No: %d",k,A[k-1]);
    printf("\n%d largest No: %d",k,A[n-k]);
    

}