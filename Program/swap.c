

#include<stdio.h>
#include<math.h>
int main()
{
    int n ,m,f1,f2;
    printf("Enter number:");
    scanf("%d",&n);
    int s = log10(n);  // find the length of no 
    m=n;               // store the original no in m 
    f2 = n%10;         // store the last value in f2
    for(int i=1; i<=s;i++)
    {
        f1 = n%10;
        n=n/10;
    }
    f1 = n;            // store the first value in f1
  
    int a = f1*pow(10,s) + f2+1 ;    // if no is 12345 the a = 1*10**4+5 =10005
    int b=m-a;                      //  b = 12345 - 10005 = 2340
    int c = f2*pow(10,s) + f1+1;    //  c = 5*10**4+1 = 50001
    int d = c + b;                  //  d = 50001+2340 = 52341
    printf("Swap number: %d",d);
}