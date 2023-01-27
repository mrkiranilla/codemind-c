#include<stdio.h>
int main()
{
    int n,r,f=0,b=0,c=0,d=0,z=0,e=0,g=0,h=0,i=0,j=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r==1)
        {
            z++;
        }
        else if(r==2)
        {
           b++; 
        }
        else if(r==3)
        {
            c++;
        }
        else if(r==4)
        {
            d++;
        }
        else if(r==5)
        {
            e++;
        }
        else if(r==6)
        {
            f++;
        }
        else if(r==7)
        {
            g++;
        }
        else if(r==8)
        {
            h++;
        }
        else if(r==9)
        {
            i++;
        }
        else
        {
            j++;
        }
        n=n/10;
    }
    if(z<=1 && b<=1 && c<=1 && d<=1 && e<=1 && f<=1 && g<=1 && h<=1 && i<=1 && j<=1)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}