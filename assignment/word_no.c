#include<stdio.h>
int main()
{ 
    int c=1;
    char str[90];
    printf("Enter the string \n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        c++;
    }
    printf("There are %d words in the sentence",c);
}