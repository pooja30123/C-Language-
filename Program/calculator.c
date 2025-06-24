#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c=0;
    int op = 0;
    printf("Enter the first No:");
    scanf("%f",&a);
    printf("Enter Second No:");
    scanf("%f",&b);
    printf("Enter 1 for addition\n Enter 2 for Subtraction \n Enter 3 for Multiplication \n Enter 4 for Division \n Enter 5 for Power \n Enter 6 for Modulus"); 
    printf("\n Enter Your Operation:");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        c=a+b;
        break;
    
    case 2:
        c=a-b;
        break;
    case 3:
        c=a*b;
        break;
    case 4:
        c=a/b;
        break;
    case 5:
        c=pow(a,b);
        break;
    case 6:
        c=(int)a%(int)b;
        break;
    default:
        printf("Please Enter the Valid Operation......");
        break;

    }

    printf("\n Your Output = %f", c);
    

}
