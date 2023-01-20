#include<stdio.h>
int main()
{
    int m,n,sum=0;
    scanf("%d%d",&m,&n);
    int a[m][n],i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
    }
}