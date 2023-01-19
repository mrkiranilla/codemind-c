#include<stdio.h>
int rev(int);
int main()
{
    int n,sq,i,s;
    scanf("%d",&n);
    s=rev(n);
    sq=n*n;
    int sq1=s*s;
    int a=rev(sq1);
    if(sq==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
int rev(int n)
{
    int r,rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}