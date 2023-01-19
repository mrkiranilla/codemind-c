#include<stdio.h>
int main()
{
    int n,i,c=0,cn=0,sq,r,r1,rev=0,rev1=0;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        c++;
        n=n/10;
    }
    while(sq!=0)
    {
        r1=sq%10;
        rev1=rev1*10+r1;
        cn++;
        if(cn==c)
        {
            break;
        }
        sq=sq/10;
    }
    if(cn==c && rev==rev1)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}