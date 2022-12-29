#include<stdio.h>
int main()
{
    int n,x,d;
    scanf("%d",&n);
    d=n/10;
    x=n%10;
    if(x==0)
    {
        printf("%d",d);
    }
    else if(x==5)
    {
        printf("%d",d+1);
    }
    else
    {
        printf("-1");
    }
}