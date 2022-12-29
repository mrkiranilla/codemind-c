#include<stdio.h>
int palindrome(int);
int main()
{
    int n,a,b,d1,d2,i;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(palindrome(i))
        {
           d1=i-n;
           a=i;
           break;
        }
    }
    for(i=n-1;;i--)
    {
        if(palindrome(i))
        {
            d2=n-i;
            b=i;
            break;
        }
    }
    if(d1<d2)
    {
        printf("%d",a);
    }
    else if(d1==d2)
    {
        printf("%d %d",b,a);
    }
    else
    {
        printf("%d",b);
    }
}
int palindrome(int n)
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