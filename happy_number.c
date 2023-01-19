#include<stdio.h>
int main()
{
    int n,r,sum=0,p;
    scanf("%d",&n);
    start:
    sum=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        p=r*r;
        sum=sum+p;
    }
    n=sum;
    if(n==1 || n==7)
    {
        printf("True");
    }
    else if(n<10)
    {
        printf("False");
    }
    else
    {
        goto start;
    }
}