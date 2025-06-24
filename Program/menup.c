#include<stdio.h>
int main()
{
    int c,n,total_bill=0;
    char q='y';
    int list[] = {20,20,30,25,50,45,40,35,40,45};
    char dish[10][20] ={"Tea", "Coffee", "Vada Pav", "Samosa", "Sandwich", "Dosa", "Edli", "Kanda Bajiya", "Dahi Kachori", "Poha"};
    printf("Welcome to Yummy Tummy \n Kindly Select Your Order......\n");
    printf("Enter 1...... Tea          - 20Rs\n");
    printf("Enter 2...... Coffee       - 20Rs\n");
    printf("Enter 3...... Vada Pav     - 30Rs\n");
    printf("Enter 4...... Samosa       - 25Rs\n");
    printf("Enter 5...... Sandwitch    - 50Rs\n");
    printf("Enter 6...... Dosa         - 45Rs\n");
    printf("Enter 7...... Idli         - 40Rs\n");
    printf("Enter 8...... Kanda Bajiya - 35Rs\n");
    printf("Enter 9...... Dahi Kachori - 40Rs\n");
    printf("Enter 10..... Poha         - 45Rs\n");
   
    printf("How many item want to Order:");
    scanf("%d",&n);

    printf("Enter Your Order From Menu No:\n");
    int i=0;
    while (i<n)
    {
        printf("Order No %d : ",(i+1));
        scanf("%d",&c);
        printf("You have Ordered : %s -- %dRs \n",dish[c-1],list[c-1]);
        total_bill += list[c-1];
        i++;
    }
    
    printf("Your Total Bill = %d",total_bill);
    printf("\nThank You ..... Visit Again.....");
    
}