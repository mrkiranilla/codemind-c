#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,j,l,c=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            l=j%10;
            if(l==2 ||l==3 || l==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}