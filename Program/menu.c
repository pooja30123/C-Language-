#include<stdio.h>
int main()
{
    int c,j=0,total_bill=0,i=1;
    int list[] = {20,20,30,25,50,45,40,35,40,45};
    char dish[10][20] ={"Tea", "Coffee", "Vada Pav", "Samosa", "Sandwich", "Dosa", "Idli", "Kanda Bajiya", "Dahi Kachori", "Poha"};
    printf("Welcome to Yummy Tummy \n Kindly Select Your Order......\n");

    while (j<10)
    {
        printf("Enter %d  for %s - %d\n",j+1,dish[j],list[j]);
        j++;
    }
    do
    {
        printf("Enter Your Order No:");
        scanf("%d",&c);
        total_bill += list[c-1];
        printf("You have ordered : %s  \n",dish[c-1]);
        printf("Want to add something else... 1 for Yes and 0 For No: ");
        scanf("%d",&i);
    }while (i==1);
    
    
    printf("\nYour Total Bill = %d",total_bill);
    printf("\nThank You ..... Visit Again.....");
    
}