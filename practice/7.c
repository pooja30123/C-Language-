#include<stdio.h>
void swap(int ,int ,int *,int *);
int main()
{
    int n,m,sn,sm;
    printf("Enter two number:");
    scanf("%d %d",&n,&m);
    swap(n,m,&sn,&sm);
    printf("First = %d\n",sn);
    printf("Second = %d\n",sm);

}
void swap(int a,int b,int *sa,int *sb)
{
    int c = a;
    *sa=b;
    *sb=c;
}