#include <stdio.h>
int main()
{
    int l[] = {5,7,6,3,9,11};
    int m = l[0];
    int max;
    for(int i=1; i<7; i++)
    {
       if(m<l[i])
       {
         max=l[i];
       }
    }
    printf("the maximum No is %d",max);
}