#include<stdio.h>
int strong(int);
int main()
{
    int n,r,t,sum=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+strong(r);
        n=n/10;
    }
    if(t==sum)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}
int strong(int n)
{
    int i,p=1;
    for(i=1;i<=n;i++)
        {
            p=p*i;
        }
        return p;
}