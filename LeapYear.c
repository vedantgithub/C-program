#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf(" %d it is the leap year",year);
	}
	else if(year%100==0)
	{
		printf("%d not a leap year",year);
	}
	else if(year%4==0)
	{	
		printf("%d is the leap year",year);
	}
	else
	{
		printf("%d not a leap year",year);
	}
}
