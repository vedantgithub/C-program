/*sum of 2D array*/
#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0;
	printf("\n enter the number");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n matrix is..");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=s+a[i][j];
			printf("\n%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nsum=%d",s);
}
	
	
	
	
	
	
	
	
	
