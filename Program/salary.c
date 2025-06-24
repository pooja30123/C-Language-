#include<stdio.h>
int main()
{
    float bs ,TA , DA , HRA ,other,monthly_salary,anual_salary;
    printf("Enter Your Basic Salary : ");
    scanf("%f",&bs);
    TA = bs*(5.0/100);
    DA = bs*(50.0/100);
    HRA = bs*(18.0/100);
    other = 10000;
    monthly_salary = bs+TA+DA+HRA+other;
    printf("basic Salary : %f \n TA : %f \n DA : %f \n HRA : %f \n Other : %f ",bs,TA,DA,HRA,other);
    printf("\n Total Monthly Salary : %f \n",monthly_salary);

    anual_salary = 12*monthly_salary;
    printf("Annual Salary Without Tax : %f \n",anual_salary);
    
    float tax1=0,tax2=0,tax3=0,tax4=0,tax5=0,tax6,tax=0;
    float s=anual_salary;


    if(s>1500000)
    {
        tax6 = (s-1500000)*(30.0/100);
        s=1500000;
        //printf("%f",tax6);
    }
    if(s>1200000 )
    {
        tax5 = (s-1200000)*(20.0/100);
        s=1200000;
        //printf("%f",tax5);
    }
     if(s>1000000)
    {
        tax4 = (s-1000000)*(15.0/100);
        s=1000000;
        //printf("%f",tax4);
    } 
    if(s>700000)
    {
        tax3 = (s-700000)*(10.0/100); 
        s=700000;        
        //printf("%f",tax3);
    }
     if(s>300000)
    {
        tax2 = (s-300000)*(5.0/100);   
        s=300000 ;
        //printf("%f",tax2);
    } 
    
     printf("Tax of above 1500000 : %f \n",tax6);
     printf("Tax Between 1200000 to 1500000 : %f \n:",tax5);
     printf("Tax Between 1000000 to 1200000 : %f \n",tax4);
     printf("Tax Between 700000 to 1000000 : %f \n",tax3);
     printf("Tax Between 300000 to 700000 : %f \n",tax2);
     printf("Tax less than 300000 : %f \n",tax1);
    
    tax = tax1+tax2+tax3+tax4+tax5+tax6;

    float ttax=tax*(4.0/100);
    printf("4 percentage of total tax: %f \n ",ttax);

    printf("Total tax : %f\n",tax+ttax);

    float final_salary = anual_salary - tax - ttax;

    printf("Your Final Salary Will be : %f \n",final_salary);
    return 0;
    
}