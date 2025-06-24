#include<stdio.h>
#include<math.h>
/*float savgsd(int,int,int,int,int,int*,float*);
int main()
{
    int a=1,b=2,c=3,d=5,e=6,sum;
    float avg;
    savgsd(a,b,c,d,e,&sum,&avg);
    printf("%d %f",sum,avg);
}
float savgsd(int p,int q,int r,int s,int t,int *sum,float *avg)
{
    *sum=p+q+r+s+t;
    *avg=*sum/5;
}*/


/*float marks(int,int,int,float*,float*);
int main()
{
    int a,b,c;
    float avg,per;
    printf("Enter the Marks Out of 100 :");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    marks(a,b,c,&avg,&per);
    printf("average=%f \n percentage=%f",avg,per);
}
float marks(int p,int q,int r,float *avg,float *per)
{
    *avg=(p+q+r)/3;
    *per=(p+q+r)*100/300;
}*/


/*float sine(float,float*);
int main()
{
    float a,r;
    printf("Enter the value of x:");
    scanf("%f",&a);
    //printf("%f",a);
    sine(a,&r);
    printf("\nSin(%f)=%f",a,r);
  
}
float sine(float x,float*r)
{
    int n=0,i=1;
    float p,f=1.0;
    while (n<10)
    {
        p=pow(x,2*n+1);
        while (i<=2*n+1)
        {
            f=f*i;
            i++;
        }
        *r+=(pow(-1,n)*p)/f;
        n++;
    }
    
}*/


/*int main()
{
    int *p,x=20;
    p=&x;
    printf("%d\n",p);
    printf("%d\n",p+1);
    printf("%d\n",*p);
    printf("%d\n",*(&x));
    printf("%d\n",*(p+1));


}*/

/*int shift(int*,int*,int*);
int main()
{
    int a,b,c;
    printf("Enter the Value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d \t b=%d \t c=%d",a,b,c);
    shift(&a,&b,&c);
    printf("\na=%d \t b=%d \t c=%d",a,b,c);
}
int shift(int *x,int *y, int *z)
{
    int c;
    c=*x;
    *x=*y;
    *y=*z;
    *z=c;
}*/

/*float area(int,int,int,float*);
int main()
{
    int a,b,c;
    float Area;
    printf("Enter the Value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    area(a,b,c,&Area);
    printf("Area of triangle = %f",Area);
}
float area(int x,int y,int z,float *A)
{
    float s=(x+y+z)/2;
    float a=s*(s-x)*(s-y)*(s-z);
    *A=sqrt(a);
}*/

/*
int main()
{
    int m,n,a,b,r,t;
    printf("Enter the first No:");
    scanf("%d",&m);
    printf("Enter the Second No:");
    scanf("%d",&n);
    if(m>n)
        a=m,b=n;
    else    
        a=n,b=m;

    while (b!=0)
    {
        r=a/b;
        t=b;
        b=a-r*b;
        a=t;
    }
    printf("%d is GCD of (%d,%d)",a,m,n);
}*/

#include<stdio.h>
#include<math.h>
int gcd(int,int,int*);
int main()
{
    int m,n,g;
    printf("Enter the first No:");
    scanf("%d",&m);
    printf("Enter the Second No:");
    scanf("%d",&n);
    gcd(m,n,&g);
    printf("%d is GCD of (%d,%d)",g,m,n);
}
int gcd(int a,int b,int*g)
{
    int t,r;
    if(b>a)
      t=a,a=b,b=t;
     
     while (b!=0)
     {
        r=a%b;
        a=b;
        b=r;
     }
     *g=a;
    
}