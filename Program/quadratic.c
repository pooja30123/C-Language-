#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter the value of a,b,c: \n");
    scanf("%f %f %f",&a,&b,&c);
    d= b*b - 4*a*c;
    if(d==0)
    {
        printf("Quadratic Equation has Real and Equal Roots:\n");
        x1=-b/(2*a);
        printf("Root1 = %f\n",x1);
        printf("Root2 = %f\n",x1);
    }
    else if(d>0)
    {
        printf("Quadratic Equation has Real and Distinct Roots:\n");
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("Root1 = %f\n",x1);
        printf("Root2 = %f\n",x2);
    }
    
    else
    {
        printf("Quadratic Equation has Complex Roots:\n");
        float r = -b/(2*a) ;
        float i = sqrt(-d)/(2*a);
        printf("Root1 = %f +%fi\n",r,i);
        printf("Root2 = %f +%fi\n",r,i);
    }
    

    

}