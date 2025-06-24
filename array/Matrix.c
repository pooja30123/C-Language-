#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],D[3][3],M[3][3];
    printf("Enter the value of Matrix B:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
       
    }
    printf("Enter the value of Matrix B:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("B[%d][%d] : ",i,j);
            scanf("%d",&B[i][j]);
        }
       
    }
    printf("Matrix A:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);;
        }
       printf("\n");
    }

    printf("Matrix B:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",B[i][j]);;
        }
       printf("\n");
    }
    printf("Matrix C=A+B:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
       printf("\n");
    }
    printf("Matrix D=A-B:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            D[i][j]=A[i][j]-B[i][j];
            printf("%d ",D[i][j]);
        }
       printf("\n");
    }
    printf("Matrix A*B:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            M[i][j]=0;
            for(int k=0;k<3;k++)
            {
                M[i][j]+=A[i][k]*B[k][j];
                
            }
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}