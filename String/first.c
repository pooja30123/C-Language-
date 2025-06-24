#include<stdio.h>
/*int main()
{
    char a ='A',b;
    printf("%c\n",a);
    printf("Enter b:");
    scanf("%c",&b);
    printf("%c\n",b);   
}*/

int main()
{
    char a[] ={"Pooja Verma"};
    char c[] = {'A','B','C'};
    int i=0;
    for(int i=0; i<3; i++)
    {
        printf("%c",c[i]);
        printf("%c",*(c+i));
    }
    while (c[i] !='\0')
    {
        printf("\n%c",c[i]);
        i++;
    }
    while (a[i] !='\0')
    {
        printf("%c",a[i]);
        i++;
    }
    
    
    return 0;
}