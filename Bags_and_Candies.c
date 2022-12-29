#include<stdio.h>
int main()
{
    int n,k,m,x,t;
    scanf("%d%d%d",&n,&k,&m);
    t=n/(k*m);
    x=n%(k*m);
    if(x==0)
    {
        printf("%d",t);
    }
    else
    {
        printf("%d",t+1);
    }
}