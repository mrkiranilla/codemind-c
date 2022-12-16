#include<stdio.h>
int main()
{
    int n,r,pro=1,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        pro=pro*r;
        sum=sum+r;
        n=n/10;
    }
   if(pro==sum)
   {
       printf("Spy Number");
   }
   else
   {
       printf("Not Spy Number");
   }
}