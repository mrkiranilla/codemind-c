#include<stdio.h>
int isdiv(int n)
{
    int r=0,t=n;
    while(n!=0)
    {
        r=n%10;
        if(r==0)
        {
            return 0;
        }
        else if(t%r!=0)
        {
            return 0;
        }
        n=n/10;
    }
    return 1;
    
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(isdiv(i)==1)
        {
            printf("%d ",i);
        }
    }
}