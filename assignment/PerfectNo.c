#include <stdio.h>
int main(){
    int n,m;
    printf("Enter Starting No: ");
    scanf("%d",&n);
    printf("Enter Last No: ");
    scanf("%d",&m);
    for(int i=n; i<=m; i++)
    {
        int c=0;
        for(int j=1; j<=i/2; j++)
        {
            if(i%j==0){
            c=c+j;
            }
        }
        if(c==i)
        {
            printf("%d is perfect square \n",i);
        }
    }
    return 0;
}