#include <stdio.h>
#include <ctype.h>
int main()
{ 
    int c=1;
    char str[90];
    printf("Enter the string \n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        c=1;
        else
        c=0;
    }
    if (c==1)
    printf("It's a number");
    else
    printf("It's not a number");
}