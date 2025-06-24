#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Char: ");
    scanf("%c",&ch);
    if (ch >=65 && ch <= 90)
        printf("Capital");
    else if (ch >=97 && ch<= 122)
        printf("Small");
    else
        printf("Other");
}