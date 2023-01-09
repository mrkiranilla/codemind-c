#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
   char s[100];
   int i,c=0;
   scanf("%s",s);
   for(i=0;s[i]!=0;i++)
   {
       if(s[i]>=48 && s[i]<=57)
       {
           c++;
       }
   }
   if(c>0)
   {
       printf("Yes
");
   }
   else
   {
       printf("No
");
   }
    }
}