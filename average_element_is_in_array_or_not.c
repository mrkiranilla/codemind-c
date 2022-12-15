#include<stdio.h>
int main()
{
    int n,i,ave,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    ave=sum/n;
    for(i=0;i<n;i++)
    {
        if(ave==a[i])
        {
            printf("True");
            break;
        }
        
    }
    if(a[i]!=ave)
    {
        printf("False");
    }
}