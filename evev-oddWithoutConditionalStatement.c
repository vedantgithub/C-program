#include<stdio.h>
int main()
{
	int num;
	printf("enter the  number");
	scanf("%d",&num);
	(num & 1 && printf("odd") || printf("even"));
}
