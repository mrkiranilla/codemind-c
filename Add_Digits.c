#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    start:
    sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    n=sum;
    if(sum<10)
    {
        printf("%d",sum);
    }
    else
    {
        goto start;
    }
}