
#include<stdio.h>
int main()
{
	int a[10],i,s=0;
	printf("\n enter the 10 number");
	for(i=0;i<10;i++)
	
	{
		scanf("%d",&a[i]); 
	}
	printf("\n you entered...");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
		s=s+a[i];
	}
	printf("\nsum=%d",s);
}
