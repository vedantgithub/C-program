#include<stdio.h>
int main()
{
	int a[5],i;
	printf("\n enter the number");
	for(i=0;i<5;i++)
	
		scanf("%d",&a[i]);
		
		printf("\nreverse array");
		/*method 1*/
	/*	for(i=4;i>=0;i--)
		printf("\n %d",a[i]);
*/		
		/*method 2*/
		for(i=0;i<5;i++)
		printf("\n%d",a[4-i]);
	
}
