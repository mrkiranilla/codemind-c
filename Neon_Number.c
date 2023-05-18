#include<stdio.h>
int main()
{
    int n,sq,sum=0,i,r;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}