#include<stdio.h>
int main()
{
    int s;
    printf("Enter the Matrix Size:");
    scanf("%d",&s);
    int M[s][s],T[s][s],R[s][s];
    printf("Matrix M:\n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            T[i][j]=M[j][i];
        }
    }
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            R[i][j]=T[i][s-1-j];
        }
    }
    printf("Rotation of Matrix M:\n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf("%d ",R[i][j]);;
        }
       printf("\n");
    }

}