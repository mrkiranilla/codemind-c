#include<stdio.h>
int main()
{
    float n,c,m=0,i;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        c=1/i;
        m=m+c;
    }
    printf("%.2f",m);
}