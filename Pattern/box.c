#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,p=1;
    printf("Enter No:");
    scanf("%d", &n);
    m=2*n-1;

    for (int i=1; i<=m; i++) {
        for (int j=1; j<=m; j++) {
            if(i==p || j==p || i==m || j==m)
                printf("%d",n);
            else
                printf(" ");
        }
        printf("\n");
    }
}
