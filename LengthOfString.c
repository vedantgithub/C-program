#include<stdio.h>
int stringlength(char []);
int main()
{
	char str[30];
	int l;
	printf("\n enter the string ");
	gets(str);
	l=stringlength(str);
	printf("\n length of the string=%d",l);
}
int stringlength(char x[])
{
	int i=0,count=0;
	while(x[i]!='\0')
	{
		count++;
		i++;
	}return count;
}
