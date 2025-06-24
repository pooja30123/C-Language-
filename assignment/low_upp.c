#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[90];
    printf("Enter the string \n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(islower(str[i])!= 0)
            str[i]=toupper(str[i]);
        else if(isupper(str[i])!= 0)
            str[i]=tolower(str[i]);
    }
    printf("%s",str);
}
