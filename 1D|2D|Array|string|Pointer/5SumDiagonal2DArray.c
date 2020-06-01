/*sum of diagonal 2D array*/
/*using two loop*/
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
			if(i==j){   //position (0,0) (1,1)  (2,2)
			
			s=s+a[i][j];
			printf("\n%d\t",a[i][j]);
		}
		}
		printf("\n");
	}
	printf("\nsum=%d",s);
}
	
	
	
	
	
	
	
	
	
 
