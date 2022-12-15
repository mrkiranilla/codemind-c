#include<stdio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("True");
            break;
        }
    }
    if(a[i]!=x)
    {
        printf("False");
    }
    
}