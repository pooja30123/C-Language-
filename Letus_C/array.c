#include<stdio.h>
/*int main()
{
    int a[10];
    int even[10],odd[10],j=0,k=0;
    printf("Enter the Array Values:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<10; i++)
    {
        if(a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else
        {
            odd[k]=a[i];
            k++;
        }    
    }
    printf("Even No are:\n");
    for(int i=0; i<j; i++)
    {
        printf("%d\n",even[i]);
    }
    printf("Odd No are:\n");
    for(int i=0; i<k; i++)
    {
        printf("%d\n",odd[i]);
    }
}*/

/*int main()
{
    int a[5],a_rev[5],k=0;
    printf("Enter the Array Values:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=4;i>=0;i--)
    {
        a_rev[k]=a[i];
        k++;
    }
    printf("Original Array:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nReverse Array:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",a_rev[i]);
    }
}*/

/*int main()
{
    int a[25],n,c=0;
    printf("Enter the Array Values:\n");
    for(int i=0; i<25; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Number:");
    scanf("%d",&n);
    for(int i=0; i<25; i++)
    {
        if(n==a[i])
        c++;
    }
    printf("\nNumber %d is present %d time in Array.",n,c);
}*/

/*int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array Values:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int m=n;
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[m-1])
            printf("Match\n");
            m--;
    }
}*/

int main()
{
    int a[25];
    printf("Enter the Array Values:\n");
    for(int i=0; i<25; i++)
    {
        scanf("%d",&a[i]);
    }
    int s=a[0];
    for(int i=1; i<25; i++)
    {
        if(a[i]<s) s=a[i];
    }
    printf("\nSmallest No : %d",s);
}
int modify(int,int*);
int main()
{
    int a[10],*p[10];
    printf("Enter the Array Values:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    modify(a[10],*p[10]);
    for(int i=0; i<10; i++)
    {
        scanf("%d",&*p[i]);
    }
}
int modify(int a[10],int *a3[10])
{
    for(int i=0; i<10; i++)
    {
        *a3[i]=3*a[i];
    }
}