#include<stdio.h>
int main()
{
    int n,r,even=0,odd=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
    
    if(r%2==0)
    {
        even++;
    }
    else if(r%2!=0)
    {
        odd++;
    }
    
    }
    if(even==0 && odd!=0)
    {
        printf("Odd");
    }
    else if(odd==0 && even!=0)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
}