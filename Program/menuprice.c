#include<stdio.h>
int main()
{
    int c;
    float bill, t_amt, amt;
    printf("Welcome to Yummy Tummy \n Kindly Select Your Order......");
    printf("Enter 1...... Tea          - 20Rs/n");
    printf("Enter 2...... Coffee       - 20Rs\n");
    printf("Enter 3...... Vada Pav     - 30Rs\n");
    printf("Enter 4...... Samosa       - 25Rs\n");
    printf("Enter 5...... Sandwitch    - 50Rs\n");
    printf("Enter 6...... Dosa         - 45Rs\n");
    printf("Enter 7...... Edli         - 40Rs\n");
    printf("Enter 8...... Kanda Bajiya - 35Rs\n");
    printf("Enter 9...... Dahi Kachori - 40Rs\n");
    printf("Enter 10..... Poha         - 45Rs\n");
    scanf("%d",&c);
    for(int i=0; i<10; i++)
    {
        if(c==1)
            amt+=20;
        if(i==2)
            amt+=20;
        if(i==3)
            amt+=30;
        if(i==4)
            amt+=25;
        if(i==5)
            amt+=50;
        if(i==6)
            amt+=45;
        if(i==7)
            amt+=40;
        if(i==8)
            amt+=35;
        if(i==9)
            amt+=40;
        if(i==10)
            amt+=45;
    }
    t_amt = amt;
    printf("Your Total Amount is : %f",t_amt);

}