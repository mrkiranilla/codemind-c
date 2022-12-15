#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        sum=sum+a[i]*pow(2,j);
        j++;
    }
    
    printf("%d",sum);
    
}