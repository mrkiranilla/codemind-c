#include<stdio.h>
int prime(int);
int main()
{
    int n,r,i,c=0,cn=0;
    scanf("%d",&n);
    if(prime(n))
    {
    while(n!=0)
    {
        r=n%10;
        if(prime(r))
        {
            c++;
        }
        else
        {
            cn++;
        }
        n=n/10;
    }
    if(cn==0)
    {
        printf("Mega Prime");
        
    }
    else{
        printf("Not Mega Prime");
    }
    }
    else{
        printf("Not Mega Prime");
    }
}
int prime(int n)
{
    int f=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            f++;
        }
    }
    if(f==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}