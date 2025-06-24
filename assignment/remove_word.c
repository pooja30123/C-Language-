#include<stdio.h>
#include<string.h>
int main()
{ 
    char c[10];
    char str[90];
    printf("Enter the string \n");
    gets(str);
    printf("Enter the word you want to remove ");
    gets(c);
    char word[10];
    int j=0;
    for (int i=0;str[i]!='\0';i++)
    {
        if( str[i] !=' ')
        { 
            word[j]=str[i];
            j++;
        }
        else
        {
             word[j] = '\0';
            if(strcmp(word, c) != 0 )
                printf("%s ",word);
            j=0;
        }
    }
    word[j] = '\0';
    if (strcmp(word, c) != 0 && word[0] != '\0') 
        printf("%s", word);
    
}