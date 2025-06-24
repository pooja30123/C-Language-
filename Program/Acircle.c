#include<stdio.h>
int main()
{
    float r,A;
    printf("Enter the value of Radius:");
    scanf("%f",&r);
    A = 3.14*r*r;
    printf("Area of circle having radius %f is %f ",r,A);
}