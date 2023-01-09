#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,r,rev=0,t;
        scanf("%d",&a);
        t=a;
        while(a!=0)
        {
            r=a%10;
            rev=rev*10+r;
            a=a/10;
        }
        if(t==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}