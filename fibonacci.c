#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c=0,cn=0;
    scanf("%d",&n);
    while(cn<n)
    {
        c=a+b;
        printf("%d ",c);
        cn++;
     a=b;
     b=c;
    }
}