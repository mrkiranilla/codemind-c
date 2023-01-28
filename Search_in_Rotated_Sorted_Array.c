#include<stdio.h>
int main()
{
    int n,i,x,c=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            c=i;
            break;
        }
    }
    if(c>=0)
    printf("%d",c);
    else
    printf("-1");
}