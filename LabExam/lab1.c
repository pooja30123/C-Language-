/*Q1. Write a C program to print words in reverse order
       INPUT : my name is pooja
       OUTPUT: pooja is name my
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, s, e, l;    

    printf("Enter Sentence: ");
    fgets(str, sizeof(str), stdin);

    l = strlen(str);
    if (str[l - 1] == '\n') 
    {
        str[l - 1] = '\0';
        l--;
    }
    
    e = l - 1;

    for (i = l - 1; i >= 0; i--) 
    {
        if (str[i] == ' ' || i == 0) 
        {
            s = (i == 0) ? i : i + 1;
            for (j = s; j <= e; j++) 
            {
                printf("%c", str[j]);
            }
            if (i != 0) 
            {
                printf(" ");
            }
            e = i - 1;
        }
    }

    return 0;
}
