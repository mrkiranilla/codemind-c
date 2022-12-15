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
        if(i%2==0 && a[i]%2!=0)
        {
            x++;
        }
       
    }
    if(x==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}