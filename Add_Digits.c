#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    start:
    s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    n=s;
    if(n<9)
    {
        printf("%d",s);
    }
    else
    {
        goto start;
    }
}