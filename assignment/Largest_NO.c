#include <stdio.h>
int main(){
    int n,m;
    printf("Enter No:");
    scanf("%d",&n);
    int max=n;
    char c='y';
    while(c=='y'|| c=='Y')
    {
        printf("Enter No:");
        scanf("%d",&m);
        if(n>m)
        {
            printf("%d is greater",n);
            n=n;
        }
        else{
            printf("%d is greater",m);
            n=m;
        }
        printf("\nWant to continue...? (Y/N): ");
        scanf("%s",&c);
    }
}