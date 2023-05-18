#include<stdio.h>
int main()
{
    int a,b,i,j,s=0,r=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
        {
            s++;
        }
        }
        if(s==9)
        {
            r++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",r);
}