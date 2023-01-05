#include<stdio.h>
int main()
{
	char str[100],str1[100];
	int i,j,t;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++);
	int len=i;
	i=0;j=len-1;
    //printf("%d %d",i,j);
    while(i<j)
    {
    	t=str[i];
    	str[i]=str[j];
    	str[j]=t;
    	i++;
    	j--;
	}
	printf("%s",str);

}