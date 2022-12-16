#include<stdio.h>
int main()
{
    int n,i,r,rev=0;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
}