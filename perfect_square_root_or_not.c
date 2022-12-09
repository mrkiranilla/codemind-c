#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    float sq;
    scanf("%d",&n);
    sq=sqrt(n);
    m=sq;
    if(m==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}