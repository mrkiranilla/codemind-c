#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1 || a[i]==0)
        {
            x++;
        }
    }
    if(x==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}