#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
    x=even-odd;
    if(x>0)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",x*-1);
    }
    
}