#include<stdio.h>
int prime(int);
int rev(int);
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(prime(i)&&rev(i))
        {
            printf("%d",i);
            break;
        }
    }
    
}
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int rev(int n)
{
    int r,rev=0,t;
    t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}