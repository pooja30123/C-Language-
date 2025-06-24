#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0, ln,sn;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        ln=arr[0];
        if(arr[i]>ln)
        {
            ln=arr[i];
        }
        sn=arr[0];
        if(arr[i]<sn)
        {
            sn=arr[i];
        }
    }
    float avg =(float)sum/n;
    printf("Sum = %d\n",sum);
    printf("Average = %f\n",avg);
    printf("Largest = %d\n",ln);
    printf("Smallest = %d\n",sn);
    
   
      
}