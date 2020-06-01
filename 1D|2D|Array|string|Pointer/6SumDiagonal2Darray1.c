
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
	//printf("\n matrix is..");
	for(i=0;i<3;i++)
	{
		
			s=s+a[i][i];
		}
	printf("\nsumof diagonal=%d",s);
}
	
	
	
	
	
	
	
	
	
 
