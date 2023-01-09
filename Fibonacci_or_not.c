#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c=0,cn=0;
    scanf("%d",&n);
    while(c<=n)
    {
        c=a+b;
        if(c==n)
        {
            printf("True");
            cn++;
            break;
        }
        a=b;
        b=c;
    }
    if(cn==0)
    {
        printf("False");
    }
}