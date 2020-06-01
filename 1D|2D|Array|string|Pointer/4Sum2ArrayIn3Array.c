#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i;
		printf("\n enter 1 the number");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	printf("\n enter 2  the number");
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	
	printf("\nthird array");
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("\n%d",c[i]);
	}
}
