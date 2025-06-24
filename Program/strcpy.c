#include<stdio.h>
/*int main(){
    char s[]="Pooja";
    char t[10];
    int i=0;
    while (s[i]!='\0')
    {
        t[i]=s[i];
        i++;
    }
    t[i]='\0';
    printf("%s",t);
    
}*/

int main()
{
    char a[10]="Jerry";
    char b[10]="Ferry";
    int i=0;
    while (a[i]!='\0'&& b[i]!='\0')
    {
        if(a[i]==b[i]) {printf("%d",0);}
        else {return (printf("%d",a[i]-b[i]));}
        i++;
    }   
}