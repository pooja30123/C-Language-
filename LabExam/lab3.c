/*Q3. A valid password must contain atleast 2 lower case letters ,2 upper case and 2 and           
atleast one special character*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char pass[100];
    int i;
    int low=0,upp=0,sp=0;

    printf("Enter a password: ");
    fgets(pass, sizeof(pass), stdin);

    int len = strlen(pass);
    if (pass[len - 1] == '\n') 
        {
            pass[len - 1] = '\0';
            len--;
        }

    for (i = 0; i < len; i++)
    {
        if (islower(pass[i])) 
            low++;
        else if (isupper(pass[i])) 
            upp++;
        else if (ispunct(pass[i])) 
            sp++;
        
    }

    if (low >= 2 && upp >= 2 && sp>= 1) 
        printf("Password is valid.\n");
    else 
        printf("Password is invalid.\n");
    

    return 0;
}
