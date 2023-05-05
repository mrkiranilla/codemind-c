#include<stdio.h>
int main()
{
    int n,i,t,sum=0;
    scanf("%d",&n);
    t=n;
    for(i=1;i<=(n/2)+1;i++)
    {
        if(n%i==0)
        {
            sum=sum+i; 
        }
    }
    if(sum==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}