#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,r,rev=0,i,sum=0,r1,rev1=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    i=1;
    while(rev!=0)
    {
        r1=rev%10;
        sum=sum+pow(r1,i);
        i++;
        rev=rev/10;
    }
    if(sum==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}