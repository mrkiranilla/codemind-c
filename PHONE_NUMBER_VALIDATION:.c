#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n<10000000000 && n>999999999)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}