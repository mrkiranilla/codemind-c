#include<stdio.h>
int all(int);
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(all(i))
        {
            printf("%d ",i);
        }
    }
    
}
int all(int a)
    {
        int r,rev=0,t;
        t=a;
        while(a!=0)
        {
            r=a%10;
            rev=rev*10+r;
            a=a/10;
        }
        if(rev==t)
        {
            return rev;
        }
        else
        {
            return 0;
        }
    }