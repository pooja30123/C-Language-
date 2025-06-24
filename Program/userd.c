#include<stdio.h>
#include<conio.h>
int main()
{
    char n,g,p;
    printf("Enter Your Name: ");
    scanf("%s", &n);
    printf("Select Your gender (M/F): ");
    scanf("%c",&g);
    if(g =='M')
    {
        p = "Mr";
    }
    else
    {
        p ="Ms";
    }
    printf("Hello %s %s Nice to Meet",n,p);

}