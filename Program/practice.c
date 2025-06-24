// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char salt[]="123";
    char newpass[200];
    char password[100];
    printf("enter the password: ");
    scanf("%s",password);
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);

    return 0;
}