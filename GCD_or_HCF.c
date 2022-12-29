#include<stdio.h>
int main()
{
    int n,m,i,mix;
    scanf("%d%d",&m,&n);
    mix=n>m?m:n;
    for(i=mix;;i--)
    {
        if(m%i==0 && n%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}