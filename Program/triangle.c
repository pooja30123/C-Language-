#include<stdio.h>
#include<math.h>

float dist(int,int,int,int,float*);
void form_triangle(float,float,float,int *);
float Area(int ,int ,int ,int ,int ,int ,float*);
int main()
{
    int x1,x2,x3,y1,y2,y3,m;
    float d,d1,d2,d3,A;
    printf("Enter the Coordinates point of (x1,y1):");
    scanf("%d %d",&x1,&y1);
    printf("Enter the Coordinates point of (x2,y2):");
    scanf("%d %d",&x2,&y2);
    dist(x1,y1,x2,y2,&d);
    printf("Distance = %f\n",d);
    printf("Enter the Coordinates point of A(x1,y1):");
    scanf("%d %d",&x1,&y1);
    printf("Enter the Coordinates point of B(x2,y2):");
    scanf("%d %d",&x2,&y2);
    printf("Enter the Coordinates point of C(x3,y3):");
    scanf("%d %d",&x3,&y3);
    dist(x1,y1,x2,y2,&d1);
    dist(x1,y1,x3,y3,&d2);
    dist(x2,y2,x3,y3,&d3);
    form_triangle(d1,d2,d3,&m);
    printf("%d",m);
    if(m==1)
    {
        Area(x1,y1,x2,y2,x3,y3,&A);
        printf("Area of Triangle : ",A);
    }
}
float dist(int x1,int y1 ,int x2,int y2,float*d)
{
    int dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    *d=sqrt(dx*dx+dy*dy);
}
void form_triangle(float d1,float d2,float d3,int *n)
{
    n=0;
    if(d1<d2+d3 && d2<d1+d3 && d3<d1+d2)
    {
         printf("It Forms Triangle.");
         *n=1;
    }
    else
        printf("It Not Forms Triangle.");
     
}
float Area(int x1,int y1 ,int x2,int y2,int x3,int y3,float*a)
{
    *a=0.5*x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
}