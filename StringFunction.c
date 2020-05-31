/*passing string into function*/
#include<stdio.h>
int length(char[]);
int main()
{
	char str[10];
	int l;
	printf("enter the string");
	scanf("%s",&str);
	//gets(str);
	l=length(str);
	printf("\n length =%d",l);
	
}

int length(char str[])
{
	int i,l=0;
	for(i=0;str[i];i++)
	{
	
	l++;
}
	return l;
}
