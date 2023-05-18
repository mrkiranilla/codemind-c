#include<stdio.h>
int main()
{
    int a,b,c=0,e,i,f=0,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
             c++;
             e=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                e++;
            }
        }
        if(e==2)
        {
            f++;
        }
        }
    }
     
    printf("%d",c-f);
}