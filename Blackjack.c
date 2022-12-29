#include<stdio.h>
int main()
{
    int a,b,w;
    scanf("%d%d",&a,&b);
    w=21-(a+b);
    if(w<=10)
    {
    printf("%d",w);
    }
    else
    {
        printf("-1");
    }
}