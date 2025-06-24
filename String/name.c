#include<stdio.h>
#include<string.h>
int main()
{
    char name2[20]; char name1[20];
    printf("Enter Your Name:");
    gets(name2);
    puts(name2);
    scanf("%[^\n]s",name1);
    printf("\nHello , %s !",name1);
    //printf("\nEnter Your Name:");
    
    return 0;
}