#include<stdio.h>
int main()
{
    char s[100];
    int i,v=0,c=0,d=0,w=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
            v++;
        }
        else if( s[i]>=48&&s[i]<=57)
        {
            d++;
        }
        else if(s[i]==' ')
        {
           w++; 
        }
        else
        {
            c++;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c,d,w);
}