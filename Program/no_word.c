// WAP to convert a number into words
#include<stdio.h>
#include<math.h>
int main()
{
    char ones[10][20] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char twos[10][20] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventy","Eighteen","Nineteen"};
    char tens[10][20] = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    char multi[10][20] = {"Hundred","Thousand","Lakh"};
    int n,n1,n2,n3,n4,n5,n6;
    printf("Enter No:");
    scanf("%d",&n);
    int len_n =log10(n) + 1;
    int org_n = n;
    if(len_n==6)
    {
        n6=n%10;
        n=n/10;
        n5 =n%10;
        n=n/10;
        n4=n%10;
        n=n/10;
        n3=n%10;
        n=n/10;
        n2=n%10;
        n=n/10;
        n1=n;
        printf("%s %s %s %s %s %s %s %s %s ",ones[n1],multi[2],tens[n2],ones[n3],multi[1],ones[n4],multi[0],tens[n5],ones[n6]);
    }
    if(len_n==5)
    {
        n5 =n%10;
        n=n/10;
        n4=n%10;
        n=n/10;
        n3=n%10;
        n=n/10;
        n2=n%10;
        n=n/10;
        n1=n;
        printf("%s %s %s %s %s %s %s",tens[n1],ones[n2],multi[1],ones[n3],multi[0],tens[n4],ones[n5]);
    }
    if(len_n==4)
    {
        n4=n%10;
        n=n/10;
        n3=n%10;
        n=n/10;
        n2=n%10;
        n=n/10;
        n1=n;
        printf("%s %s %s %s %s %s",ones[n1],multi[1],ones[n2],multi[0],tens[n3],ones[n4]);
    }
    if(len_n==3)
    {
        n3=n%10;
        n=n/10;
        n2=n%10;
        n=n/10;
        n1=n;
        printf("%s %s %s %s",ones[n1],multi[0],tens[n2],ones[n3]);
    }
    if(len_n==2)
    {
        n2=n%10;
        n=n/10;
        n1=n;
        if(n1==1)
            printf("%s",twos[n]);
        else if(n1>=2)
            printf("%s %s",tens[n1],ones[n2]);
    }
    if(len_n==1)
    {
        printf("%s",ones[n]);
    }
}