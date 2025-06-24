#include<stdio.h>
int main()
{
    int n;
    printf("How many no Want to Compare?\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter %d Number:\n",n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int l=A[0],sl=-1,s=A[0],ss=-1;           // l-lasgest, sl-second largest, s-smallest, ss,second smallest
    for(int i=1;i<n;i++)
    {
        if(A[i]>l)
        {
            sl=l;
            l=A[i];
        }
        else if(A[i]>sl && A[i]!=l)
            sl=A[i];
            
        if(A[i]<s)
        {
            ss=s;
            s=A[i];
        }
        else if(A[i]<ss && A[i]!=s)
            ss=A[i];
            
    }
    if(sl==-1) sl=l;
    if(ss==-1) ss=s;
  
    printf("Second Largest No: %d \n",sl);
    printf("Second Smallest No: %d ",ss);
    return 0;
}
