#include<stdio.h>
int main()
{
    int n,i,sum=0,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=a[0];
        if(min>a[i])
        {
           min=a[i]; 
        }
    }
    printf("%d",min);
}