#include<stdio.h>
int main()
{
    int m;
    printf("Enter Your Marks: ");
    scanf("%d",&m);
    if(m<=100 && m>=90)
        printf("Grade is A+");

    else if(m<90 && m>=80)
        printf("Grade is A");
    
    else if(m<80 && m>=70)
        printf("Grade is B+");
    
    else if(m<70 && m>=60)
        printf("Grade is B");
    
    else if(m<60 && m>=50)
        printf("Grade is C");
    
    else if(m<50 && m>=40)
        printf("Grade is D");
    
    else 
        printf("Grade is F");
    
}